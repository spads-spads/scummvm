/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#include "titanic/game/doorbot_elevator_handler.h"

namespace Titanic {

int CDoorbotElevatorHandler::_v1;

void CDoorbotElevatorHandler::save(SimpleFile *file, int indent) {
	file->writeNumberLine(1, indent);
	file->writeNumberLine(_value, indent);
	file->writeNumberLine(_v1, indent);
	CGameObject::save(file, indent);
}

void CDoorbotElevatorHandler::load(SimpleFile *file) {
	file->readNumber();
	_value = file->readNumber();
	_v1 = file->readNumber();
	CGameObject::load(file);
}

bool CDoorbotElevatorHandler::EnterNodeMsg(CEnterNodeMsg *msg) {
	warning("CDoorbotElevatorHandler::handleEvent");
	return true;
}

} // End of namespace Titanic
