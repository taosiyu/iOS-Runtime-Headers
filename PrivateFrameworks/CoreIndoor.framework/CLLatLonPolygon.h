/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface CLLatLonPolygon : PBCodable <NSCopying> {
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _latitudes;
    } _longitudes;
    double _tolerance;
}

@property(readonly) double* latitudes;
@property(readonly) unsigned long long latitudesCount;
@property(readonly) double* longitudes;
@property(readonly) unsigned long long longitudesCount;
@property double tolerance;

- (void)addLatitude:(double)arg1;
- (void)addLongitude:(double)arg1;
- (void)clearLatitudes;
- (void)clearLongitudes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)latitudeAtIndex:(unsigned long long)arg1;
- (double*)latitudes;
- (unsigned long long)latitudesCount;
- (double)longitudeAtIndex:(unsigned long long)arg1;
- (double*)longitudes;
- (unsigned long long)longitudesCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLatitudes:(double*)arg1 count:(unsigned long long)arg2;
- (void)setLongitudes:(double*)arg1 count:(unsigned long long)arg2;
- (void)setTolerance:(double)arg1;
- (double)tolerance;
- (void)writeTo:(id)arg1;

@end