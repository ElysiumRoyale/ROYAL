Elysium_Royale Core
=============

Setup
---------------------
[Elysium_Royale Core](http://elysium_royale.org/wallet) is the original Elysium_Royale client and it builds the backbone of the network. However, it downloads and stores the entire history of Elysium_Royale transactions; depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more. Thankfully you only have to do this once.

Running
---------------------
The following are some helpful notes on how to run Elysium_Royale Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/elysium_royale-qt` (GUI) or
- `bin/elysium_royaled` (headless)

If this is the first time running Elysium_Royale Core (since v5.0.0), you'll need to install the sapling params by running the included `install-params.sh` script, which copies the two params files to `$HOME/.elysium_royale-params`

### Windows

Unpack the files into a directory, and then run elysium_royale-qt.exe.

### macOS

Drag Elysium_Royale-Qt to your applications folder, and then run Elysium_Royale-Qt.

### Need Help?

* See the documentation at the [Elysium_Royale Wiki](https://github.com/Elysium_Royale-Project/Elysium_Royale/wiki)
for help and more information.
* Ask for help on the [Elysium_Royale Forum](http://forum.elysium_royale.org/).
* Join our Discord server [Discord Server](https://discord.elysium_royale.org)

Building
---------------------
The following are developer notes on how to build Elysium_Royale Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [Gitian Building Guide](gitian-building.md)

Development
---------------------
The Elysium_Royale repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Multiwallet Qt Development](multiwallet-qt.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://www.fuzzbawls.pw/elysium_royale/doxygen/)
- [Translation Process](translation_process.md)
- [Unit Tests](unit-tests.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Dnsseed Policy](dnsseed-policy.md)

### Resources
* Discuss on the [Elysium_Royale](http://forum.elysium_royale.org/) forum.
* Join the [Elysium_Royale Discord](https://discord.elysium_royale.org).

### Miscellaneous
- [Files](files.md)
- [Fuzz-testing](fuzzing.md)
- [Reduce Memory](reduce-memory.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
