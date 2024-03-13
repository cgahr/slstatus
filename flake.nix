{
  description = "A very basic flake";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs?ref=nixos-unstable";

    mini-compile-commands = {
      url = "github:danielbarter/mini_compile_commands";
      flake = false;
    };
  };

  outputs = { self, nixpkgs, mini-compile-commands }:
    let
      system = "x86_64-linux";
      pkgs = nixpkgs.legacyPackages."${system}";
      mcc-env = (pkgs.callPackage mini-compile-commands { }).wrap pkgs.stdenv;
      mcc-hook = (pkgs.callPackage mini-compile-commands { }).hook;
    in
    {
      packages."${system}" = {
        slstatus = pkgs.slstatus.overrideAttrs (old: {
          src = ./.;
          buildInputs = old.buildInputs;
        });

        default = self.packages."${system}".slstatus;
      };
    };
}
