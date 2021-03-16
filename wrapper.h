// Copyright 2021 Sergei Solodovnikov
//
// Licensed under the Apache License, Version 2.0 <LICENSE-APACHE or
// http://www.apache.org/licenses/LICENSE-2.0> or the MIT license
// <LICENSE-MIT or http://opensource.org/licenses/MIT>, at your
// option. This file may not be copied, modified, or distributed
// except according to those terms.

//bindgen wraper

#include <archive.h>
#include <archive_entry.h>

enum
{
    ARCHIVE_STATUS_EOF = ARCHIVE_EOF,
    ARCHIVE_STATUS_OK = ARCHIVE_OK,
    ARCHIVE_STATUS_RETRY = ARCHIVE_RETRY,
    ARCHIVE_STATUS_WARN = ARCHIVE_WARN,
    ARCHIVE_STATUS_FAILED = ARCHIVE_FAILED,
    ARCHIVE_STATUS_FATAL = ARCHIVE_FATAL
};