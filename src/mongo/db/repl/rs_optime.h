// @file rs_optime.h

/*
 *    Copyright (C) 2010 10gen Inc.
 *    Copyright (C) 2013 Tokutek Inc.
 *
 *    This program is free software: you can redistribute it and/or  modify
 *    it under the terms of the GNU Affero General Public License, version 3,
 *    as published by the Free Software Foundation.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU Affero General Public License for more details.
 *
 *    You should have received a copy of the GNU Affero General Public License
 *    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "../../util/optime.h"

namespace mongo {

    const char rsoplog[] = "local.oplog.rs";
    const char rsOplogRefs[] = "local.oplog.refs";
    const char rsReplInfo[] = "local.replInfo";
    const char rsVoteInfo[] = "local.replVote";
    const char rsRollbackGTIDSet[] = "local.rollback.gtidset";
    const char rsRollbackDocs[] = "local.rollback.docs";
    const char rsRollbackOpdata[] = "local.rollback.opdata"; // stores oplog entries that are rolled back
}
