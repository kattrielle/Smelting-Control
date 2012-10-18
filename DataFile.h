/* 
 * File:   DataFile.h
 * Author: kate
 *
 * Created on 13 Октябрь 2012 г., 14:40
 */

#ifndef DATAFILE_H
#define	DATAFILE_H
#include "DataGet.h"

class DataFile : public DataGet {
public:
    DataFile(char *file);
    DataFile(const DataFile& orig);
    virtual ~DataFile();
private:
    FILE *measuresData;

};

#endif	/* DATAFILE_H */

