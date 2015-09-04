#
# Regular cron jobs for the rasdaemon package
#
0 4	* * *	root	[ -x /usr/bin/rasdaemon_maintenance ] && /usr/bin/rasdaemon_maintenance
