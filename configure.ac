
dnl# setup
AC_INIT([zedzpic], 0.0.1)
AC_CONFIG_FILES([Makefile])
AC_DEFUN([PKG_PROG_PKG_CONFIG])

dnl AC_CONFIG_MACRO_DIR([m4])
dnl# ensure PKG_CONFIG path variable is set
AC_PATH_PROG(PKG_CONFIG, pkg-config, no)

dnl# compiler
dnl AC_PROG_CC

dnl# gtk
dnl# extra gnome related compile warnings
dnl GNOME_COMPILE_WARNINGS([maximum])
GTK_VERSION=[3.0.0]
GTK_PACKAGE=[gtk+-3.0]
PKG_CHECK_MODULES(GTK, [$GTK_PACKAGE >= $GTK_VERSION])
dnl# custom error messages hide useful default error messages!
dnl PKG_CHECK_MODULES(GTK, [gtk+-3.0 >= $GTK_MIN_VERSION], [], [AC_MSG_ERROR([gtk+-3.0 >= $GTK_MIN_VERSION not found])])

AC_OUTPUT([config.h])
