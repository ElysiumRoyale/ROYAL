

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *elysium_royale_strings[] = {
QT_TRANSLATE_NOOP("elysium royale", ""
"Cannot find the Sapling parameters in the following directory:\n"
"%s\n"
"Please run 'sapling-fetch-params' or './util/fetch-params.sh' and then "
"restart."),
QT_TRANSLATE_NOOP("elysium royale", ""
"Cannot obtain a lock on data directory %s. %s is probably already running."),
QT_TRANSLATE_NOOP("elysium royale", ""
"Cannot start deterministic masternode before enforcement. Remove %s to start "
"as legacy masternode"),
QT_TRANSLATE_NOOP("elysium royale", ""
"Cannot upgrade to Sapling wallet (already running Sapling support). Version: "
"%d"),
QT_TRANSLATE_NOOP("elysium royale", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("elysium royale", ""
"Enabling Masternode support requires turning on transaction indexing.Please "
"add %s to your configuration and start with %s"),
QT_TRANSLATE_NOOP("elysium royale", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("elysium royale", ""
"Error: Unsupported argument %s found. Setting SOCKS version isn't possible "
"anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("elysium royale", ""
"Failed to create backup, file already exists! This could happen if you "
"restarted wallet in less than 60 seconds. You can continue if you are ok "
"with this."),
QT_TRANSLATE_NOOP("elysium royale", ""
"Invalid -wallet path '%s'. -wallet path should point to a directory where "
"wallet.dat and database/log.?????????? files can be stored, a location where "
"such a directory could be created or (for backwards compatibility) the name "
"of an existing data file in -walletdir (%s)"),
QT_TRANSLATE_NOOP("elysium royale", ""
"Invalid amount for %s: '%s' (must be at least the minimum relay fee of %s to "
"prevent stuck transactions)"),
QT_TRANSLATE_NOOP("elysium royale", ""
"Legacy masternode system disabled. Use %s to start as deterministic "
"masternode"),
QT_TRANSLATE_NOOP("elysium royale", ""
"Please check that your computer's date and time are correct! If your clock "
"is wrong %s will not work properly."),
QT_TRANSLATE_NOOP("elysium royale", ""
"System error while flushing the chainstate after pruning invalid entries. "
"Possible corrupt database."),
QT_TRANSLATE_NOOP("elysium royale", ""
"The block database contains a block which appears to be from the future. "
"This may be due to your computer's date and time being set incorrectly. Only "
"rebuild the block database if you are sure that your computer's date and "
"time are correct"),
QT_TRANSLATE_NOOP("elysium royale", ""
"This file contains all of your private keys in plain text. DO NOT send this "
"file to anyone!"),
QT_TRANSLATE_NOOP("elysium royale", ""
"This is a pre-release test build - use at your own risk - do not use for "
"staking or merchant applications!"),
QT_TRANSLATE_NOOP("elysium royale", ""
"Total length of network version string (%i) exceeds maximum length (%i). "
"Reduce the number or size of %s."),
QT_TRANSLATE_NOOP("elysium royale", ""
"Unable to replay blocks. You will need to rebuild the database using %s."),
QT_TRANSLATE_NOOP("elysium royale", ""
"WARNING: The transaction has been signed and recorded, so the wallet will "
"try to re-send it. Use 'abandontransaction' to cancel it. (txid: %s)"),
QT_TRANSLATE_NOOP("elysium royale", ""
"Warning: %s is set very high! Fees this large could be paid on a single "
"transaction."),
QT_TRANSLATE_NOOP("elysium royale", ""
"Warning: %s is set very high! This is the transaction fee you will pay if "
"you send a transaction."),
QT_TRANSLATE_NOOP("elysium royale", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong %s will not work properly."),
QT_TRANSLATE_NOOP("elysium royale", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("elysium royale", ""
"Warning: Wallet file corrupt, data salvaged! Original %s saved as %s in %s; "
"if your balance or transactions are incorrect you should restore from a "
"backup."),
QT_TRANSLATE_NOOP("elysium royale", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("elysium royale", ""
"Warning: error reading %s! All keys read correctly, but transaction data or "
"address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("elysium royale", ""
"\"local\" vote is no longer available with DMNs. Use \"alias\" from the "
"wallet with the voting key."),
QT_TRANSLATE_NOOP("elysium royale", "%s Invalid %s address or hostname: '%s'"),
QT_TRANSLATE_NOOP("elysium royale", "%s corrupt, salvage failed"),
QT_TRANSLATE_NOOP("elysium royale", "%s is not allowed in combination with enabled wallet functionality"),
QT_TRANSLATE_NOOP("elysium royale", "%s is only allowed with a single wallet file"),
QT_TRANSLATE_NOOP("elysium royale", "(must be %d for %s-net)"),
QT_TRANSLATE_NOOP("elysium royale", "A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("elysium royale", "Active Masternode not initialized."),
QT_TRANSLATE_NOOP("elysium royale", "Calculating money supply..."),
QT_TRANSLATE_NOOP("elysium royale", "Can't generate a change-address key. Please call keypoolrefill first."),
QT_TRANSLATE_NOOP("elysium royale", "Cannot downgrade wallet."),
QT_TRANSLATE_NOOP("elysium royale", "Cannot resolve -%s address: '%s'"),
QT_TRANSLATE_NOOP("elysium royale", "Cannot set %s or %s together with %s"),
QT_TRANSLATE_NOOP("elysium royale", "Cannot upgrade a locked wallet."),
QT_TRANSLATE_NOOP("elysium royale", "Cannot write to data directory '%s'; check permissions."),
QT_TRANSLATE_NOOP("elysium royale", "Change index out of range"),
QT_TRANSLATE_NOOP("elysium royale", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
QT_TRANSLATE_NOOP("elysium royale", "Copyright (C) 2014-%i The Dash Core Developers"),
QT_TRANSLATE_NOOP("elysium royale", "Copyright (C) 2015-%i The %s Developers"),
QT_TRANSLATE_NOOP("elysium royale", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("elysium royale", "Could not find asmap file %s"),
QT_TRANSLATE_NOOP("elysium royale", "Could not open debug log file %s"),
QT_TRANSLATE_NOOP("elysium royale", "Could not parse asmap file %s"),
QT_TRANSLATE_NOOP("elysium royale", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("elysium royale", "Deterministic masternodes are not enforced yet"),
QT_TRANSLATE_NOOP("elysium royale", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("elysium royale", "Done loading"),
QT_TRANSLATE_NOOP("elysium royale", "Elliptic curve cryptography sanity check failure. Aborting."),
QT_TRANSLATE_NOOP("elysium royale", "Error initializing block database"),
QT_TRANSLATE_NOOP("elysium royale", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("elysium royale", "Error loading %s: Wallet corrupted"),
QT_TRANSLATE_NOOP("elysium royale", "Error loading %s: Wallet requires newer version of %s"),
QT_TRANSLATE_NOOP("elysium royale", "Error loading %s\n"),
QT_TRANSLATE_NOOP("elysium royale", "Error loading block database"),
QT_TRANSLATE_NOOP("elysium royale", "Error loading wallet %s. Duplicate %s filename specified."),
QT_TRANSLATE_NOOP("elysium royale", "Error opening block database"),
QT_TRANSLATE_NOOP("elysium royale", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("elysium royale", "Error upgrading chainstate database"),
QT_TRANSLATE_NOOP("elysium royale", "Error"),
QT_TRANSLATE_NOOP("elysium royale", "Error: %s must be at least %d MB"),
QT_TRANSLATE_NOOP("elysium royale", "Error: %s must be true if %s is set."),
QT_TRANSLATE_NOOP("elysium royale", "Error: A fatal internal error occured, see debug.log for details"),
QT_TRANSLATE_NOOP("elysium royale", "Error: A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("elysium royale", "Error: Disk space is low for %s"),
QT_TRANSLATE_NOOP("elysium royale", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("elysium royale", "Error: Initializing networking failed"),
QT_TRANSLATE_NOOP("elysium royale", "Error: Unsupported argument %s found, use %s."),
QT_TRANSLATE_NOOP("elysium royale", "Error: Unsupported argument %s found. Checklevel must be level 4."),
QT_TRANSLATE_NOOP("elysium royale", "Failed to accept tx in the memory pool (reason: %s)\n"),
QT_TRANSLATE_NOOP("elysium royale", "Failed to delete backup, error: %s"),
QT_TRANSLATE_NOOP("elysium royale", "Failed to listen on any port. Use %s if you want this."),
QT_TRANSLATE_NOOP("elysium royale", "Failed to parse host:port string"),
QT_TRANSLATE_NOOP("elysium royale", "Failed to rescan the wallet during initialization"),
QT_TRANSLATE_NOOP("elysium royale", "Importing..."),
QT_TRANSLATE_NOOP("elysium royale", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("elysium royale", "Information"),
QT_TRANSLATE_NOOP("elysium royale", "Initialization sanity check failed. %s is shutting down."),
QT_TRANSLATE_NOOP("elysium royale", "Insufficient funds."),
QT_TRANSLATE_NOOP("elysium royale", "Invalid -masternodeaddr address: %s"),
QT_TRANSLATE_NOOP("elysium royale", "Invalid -masternodeaddr port %d, isn't the same as the peer port %d"),
QT_TRANSLATE_NOOP("elysium royale", "Invalid -masternodeaddr port %d, only %d is supported on %s-net."),
QT_TRANSLATE_NOOP("elysium royale", "Invalid activation height (%s)"),
QT_TRANSLATE_NOOP("elysium royale", "Invalid amount for %s: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("elysium royale", "Invalid amount for -%s=<amount>: '%s'"),
QT_TRANSLATE_NOOP("elysium royale", "Invalid masternodeprivkey. Please see the documentation."),
QT_TRANSLATE_NOOP("elysium royale", "Invalid mnoperatorprivatekey. Please see the documentation."),
QT_TRANSLATE_NOOP("elysium royale", "Invalid netmask specified in %s: '%s'"),
QT_TRANSLATE_NOOP("elysium royale", "Invalid network upgrade (%s)"),
QT_TRANSLATE_NOOP("elysium royale", "Invalid port %d detected in masternode.conf"),
QT_TRANSLATE_NOOP("elysium royale", "Invalid status error."),
QT_TRANSLATE_NOOP("elysium royale", "Keypool ran out, please call keypoolrefill first, or unlock the wallet."),
QT_TRANSLATE_NOOP("elysium royale", "Legacy Masternode is obsolete."),
QT_TRANSLATE_NOOP("elysium royale", "Line: %d"),
QT_TRANSLATE_NOOP("elysium royale", "Loading addresses..."),
QT_TRANSLATE_NOOP("elysium royale", "Loading banlist..."),
QT_TRANSLATE_NOOP("elysium royale", "Loading block index..."),
QT_TRANSLATE_NOOP("elysium royale", "Loading budget cache..."),
QT_TRANSLATE_NOOP("elysium royale", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("elysium royale", "Loading masternode payment cache..."),
QT_TRANSLATE_NOOP("elysium royale", "Loading sporks..."),
QT_TRANSLATE_NOOP("elysium royale", "Loading wallet..."),
QT_TRANSLATE_NOOP("elysium royale", "Loading/Pruning invalid outputs..."),
QT_TRANSLATE_NOOP("elysium royale", "MNs synchronization pending..."),
QT_TRANSLATE_NOOP("elysium royale", "Need to specify a port with %s: '%s'"),
QT_TRANSLATE_NOOP("elysium royale", "Network upgrade parameters malformed, expecting %s"),
QT_TRANSLATE_NOOP("elysium royale", "Network upgrade parameters may only be overridden on regtest."),
QT_TRANSLATE_NOOP("elysium royale", "No error"),
QT_TRANSLATE_NOOP("elysium royale", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("elysium royale", "OS cryptographic RNG sanity check failure. Aborting."),
QT_TRANSLATE_NOOP("elysium royale", "Peers are being disconnected due time differences."),
QT_TRANSLATE_NOOP("elysium royale", "Preparing for resync..."),
QT_TRANSLATE_NOOP("elysium royale", "Reaccepting wallet transactions..."),
QT_TRANSLATE_NOOP("elysium royale", "Replaying blocks..."),
QT_TRANSLATE_NOOP("elysium royale", "Rescanning..."),
QT_TRANSLATE_NOOP("elysium royale", "Shutdown requested over the txs scan. Exiting."),
QT_TRANSLATE_NOOP("elysium royale", "Signing transaction failed"),
QT_TRANSLATE_NOOP("elysium royale", "Specified -walletdir \"%s\" does not exist"),
QT_TRANSLATE_NOOP("elysium royale", "Specified -walletdir \"%s\" is a relative path"),
QT_TRANSLATE_NOOP("elysium royale", "Specified -walletdir \"%s\" is not a directory"),
QT_TRANSLATE_NOOP("elysium royale", "Specified blocks directory \"%s\" does not exist."),
QT_TRANSLATE_NOOP("elysium royale", "Synchronization failed"),
QT_TRANSLATE_NOOP("elysium royale", "Synchronization finished"),
QT_TRANSLATE_NOOP("elysium royale", "Synchronizing budgets..."),
QT_TRANSLATE_NOOP("elysium royale", "Synchronizing masternode winners..."),
QT_TRANSLATE_NOOP("elysium royale", "Synchronizing masternodes..."),
QT_TRANSLATE_NOOP("elysium royale", "Synchronizing sporks..."),
QT_TRANSLATE_NOOP("elysium royale", "The threshold value cannot be less than %s"),
QT_TRANSLATE_NOOP("elysium royale", "This is experimental software."),
QT_TRANSLATE_NOOP("elysium royale", "This is not a deterministic masternode. 'local' option disabled."),
QT_TRANSLATE_NOOP("elysium royale", "This is not a masternode. 'local' option disabled."),
QT_TRANSLATE_NOOP("elysium royale", "This is not a masternode."),
QT_TRANSLATE_NOOP("elysium royale", "This product includes UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("elysium royale", "Transaction amount too small"),
QT_TRANSLATE_NOOP("elysium royale", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("elysium royale", "Transaction canceled."),
QT_TRANSLATE_NOOP("elysium royale", "Transaction must have at least one recipient"),
QT_TRANSLATE_NOOP("elysium royale", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("elysium royale", "Transaction too large"),
QT_TRANSLATE_NOOP("elysium royale", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("elysium royale", "Unable to bind to %s on this computer. %s is probably already running."),
QT_TRANSLATE_NOOP("elysium royale", "Unable to generate initial key!"),
QT_TRANSLATE_NOOP("elysium royale", "Unable to generate keys"),
QT_TRANSLATE_NOOP("elysium royale", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("elysium royale", "Unable to start HTTP server. See debug log for details."),
QT_TRANSLATE_NOOP("elysium royale", "Unknown network specified in %s: '%s'"),
QT_TRANSLATE_NOOP("elysium royale", "Unsupported logging category %s=%s."),
QT_TRANSLATE_NOOP("elysium royale", "Upgrading coins database if needed..."),
QT_TRANSLATE_NOOP("elysium royale", "User Agent comment (%s) contains unsafe characters."),
QT_TRANSLATE_NOOP("elysium royale", "Verifying blocks..."),
QT_TRANSLATE_NOOP("elysium royale", "Verifying wallet(s)..."),
QT_TRANSLATE_NOOP("elysium royale", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("elysium royale", "Wallet needed to be rewritten: restart %s to complete"),
QT_TRANSLATE_NOOP("elysium royale", "Warning"),
QT_TRANSLATE_NOOP("elysium royale", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("elysium royale", "Warning: Unsupported argument %s ignored, use %s"),
QT_TRANSLATE_NOOP("elysium royale", "Warning: Unsupported argument %s ignored, use %s."),
QT_TRANSLATE_NOOP("elysium royale", "You can not start a masternode in litemode"),
QT_TRANSLATE_NOOP("elysium royale", "You need to rebuild the database using %s to change %s"),
QT_TRANSLATE_NOOP("elysium royale", "Zapping all transactions from wallet..."),
};
