lib_LTLIBRARIES = libexample-@EXAMPLE_API_VERSION@.la
libexample_@EXAMPLE_API_VERSION@_la_SOURCES = example/something.cc \
                                              $(libexample_h_sources) \
                                              $(libexample_sub_h_sources) \
                                              $(libexample_h)
libexample_@EXAMPLE_API_VERSION@_la_LDFLAGS = -version-info \
                                              $(EXAMPLE_SO_VERSION)
libexample_h = example/example.h
libexample_h_sources = example/something.h
libexample_sub_h_sources = example/sub/sub.h

example_libincludedir = $(libdir)/@EXAMPLE_FULL_NAME@/include
example_includedir = $(includedir)/@EXAMPLE_FULL_NAME@
example_headers_includedir = $(example_includedir)/@PACKAGE_TARNAME@
example_sub_headers_includedir = $(example_headers_includedir)/sub

nodist_example_libinclude_HEADERS = config.h
example_include_HEADERS = $(libexample_h)
example_headers_include_HEADERS = $(libexample_h_sources)
example_sub_headers_include_HEADERS = $(libexample_sub_h_sources)

pkgconfigdir = $(libdir)/pkgconfig
nodist_pkgconfig_DATA = @EXAMPLE_FULL_NAME@.pc

dist_noinst_SCRIPTS = autogen.sh
