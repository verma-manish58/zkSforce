// Copyright (c) 2013 Simon Fell
//
// Permission is hereby granted, free of charge, to any person obtaining a 
// copy of this software and associated documentation files (the "Software"), 
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense, 
// and/or sell copies of the Software, and to permit persons to whom the 
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included 
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS 
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN 
// THE SOFTWARE.
//

#import "ZKXMLSerializable.h"

/*
<xsd:complexType name="PackageVersion" xmlns="http://www.w3.org/2001/XMLSchema" xmlns:ens="urn:sobject.partner.soap.sforce.com" xmlns:tns="urn:partner.soap.sforce.com" xmlns:fns="urn:fault.partner.soap.sforce.com" xmlns:xsd="http://www.w3.org/2001/XMLSchema" xmlns:soap="http://schemas.xmlsoap.org/wsdl/soap/" xmlns="http://schemas.xmlsoap.org/wsdl/">
  <xsd:sequence>
    <xsd:element type="xsd:int" name="majorNumber"/>
    <xsd:element type="xsd:int" name="minorNumber"/>
    <xsd:element type="xsd:string" name="namespace"/>
  </xsd:sequence>
</xsd:complexType>
*/
@interface ZKPackageVersion : NSObject<ZKXMLSerializable> {
	NSInteger  majorNumber;
	NSInteger  minorNumber;
	NSString  *namespace;
}
@property (assign) NSInteger  majorNumber; 
@property (assign) NSInteger  minorNumber; 
@property (retain) NSString  *namespace; 
@end
