/*
*	Copyright (C) 2010 Thorsten Liebig (Thorsten.Liebig@gmx.de)
*
*	This program is free software: you can redistribute it and/or modify
*	it under the terms of the GNU General Public License as published by
*	the Free Software Foundation, either version 3 of the License, or
*	(at your option) any later version.
*
*	This program is distributed in the hope that it will be useful,
*	but WITHOUT ANY WARRANTY; without even the implied warranty of
*	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*	GNU General Public License for more details.
*
*	You should have received a copy of the GNU General Public License
*	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef PROCESSCURRENT_H
#define PROCESSCURRENT_H

#include "processing.h"

class ProcessCurrent : public Processing
{
public:
	ProcessCurrent(Operator* op, Engine* eng);
	virtual ~ProcessCurrent();

	virtual void OpenFile(string outfile);

	virtual void DefineStartStopCoord(double* dstart, double* dstop);

	virtual int Process();

protected:
	ofstream file;

	vector<FDTD_FLOAT> v_current;
};

#endif // PROCESSCURRENT_H