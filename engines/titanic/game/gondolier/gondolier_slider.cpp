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

#include "titanic/game/gondolier/gondolier_slider.h"

namespace Titanic {

CGondolierSlider::CGondolierSlider() : CGondolierBase(),
	_fieldBC(0), _fieldC0(0), _fieldC4(0), _fieldC8(0),
	_fieldCC(0), _fieldD0(0), _fieldD4(0), _fieldD8(0),
	_fieldDC(0), _fieldE0(0), _fieldE4(0), _fieldE8(0),
	_fieldEC(0), _string1("NULL"), _fieldFC(0), _field118(0) {
}

void CGondolierSlider::save(SimpleFile *file, int indent) {
	file->writeNumberLine(1, indent);
	file->writeNumberLine(_fieldBC, indent);
	file->writeNumberLine(_fieldC0, indent);
	file->writeNumberLine(_fieldC4, indent);
	file->writeNumberLine(_fieldC8, indent);
	file->writeNumberLine(_fieldCC, indent);
	file->writeNumberLine(_fieldD0, indent);
	file->writeNumberLine(_fieldD4, indent);
	file->writeNumberLine(_fieldD8, indent);
	file->writeNumberLine(_fieldDC, indent);
	file->writeNumberLine(_fieldE0, indent);
	file->writeNumberLine(_fieldE4, indent);
	file->writeNumberLine(_fieldE8, indent);
	file->writeNumberLine(_fieldCC, indent);
	file->writeQuotedLine(_string1, indent);
	file->writeNumberLine(_fieldFC, indent);
	file->writeQuotedLine(_string2, indent);
	file->writeQuotedLine(_string3, indent);
	file->writeNumberLine(_field118, indent);

	CGondolierBase::save(file, indent);
}

void CGondolierSlider::load(SimpleFile *file) {
	file->readNumber();
	_fieldBC = file->readNumber();
	_fieldC0 = file->readNumber();
	_fieldC4 = file->readNumber();
	_fieldC8 = file->readNumber();
	_fieldCC = file->readNumber();
	_fieldD0 = file->readNumber();
	_fieldD4 = file->readNumber();
	_fieldD8 = file->readNumber();
	_fieldDC = file->readNumber();
	_fieldE0 = file->readNumber();
	_fieldE4 = file->readNumber();
	_fieldE8 = file->readNumber();
	_fieldEC = file->readNumber();
	_string1 = file->readString();
	_fieldFC = file->readNumber();
	_string2 = file->readString();
	_string3 = file->readString();
	_field118 = file->readNumber();

	CGondolierBase::load(file);
}

} // End of namespace Titanic
