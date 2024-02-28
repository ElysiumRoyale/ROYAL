
Debian
====================
This directory contains files used to package elysium_royaled/elysium_royale-qt
for Debian-based Linux systems. If you compile elysium_royaled/elysium_royale-qt yourself, there are some useful files here.

## elysium_royale: URI support ##


elysium_royale-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install elysium_royale-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your elysium_royale-qt binary to `/usr/bin`
and the `../../share/pixmaps/elysium_royale128.png` to `/usr/share/pixmaps`

elysium_royale-qt.protocol (KDE)

