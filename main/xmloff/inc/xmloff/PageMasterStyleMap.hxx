/**************************************************************
 * 
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 * 
 *************************************************************/



#ifndef _XMLOFF_PAGEMASTERSTYLEMAP_HXX_
#define _XMLOFF_PAGEMASTERSTYLEMAP_HXX_

#include <xmloff/maptype.hxx>
#include <xmloff/xmltypes.hxx>
#include <xmloff/contextid.hxx>

//______________________________________________________________________________

#define	XML_PM_TYPE_PAGESTYLELAYOUT		(XML_PM_TYPES_START +  0)
#define	XML_PM_TYPE_NUMFORMAT			(XML_PM_TYPES_START +  1)
#define	XML_PM_TYPE_NUMLETTERSYNC		(XML_PM_TYPES_START +  2)
#define XML_PM_TYPE_PAPERTRAYNUMBER		(XML_PM_TYPES_START +  3)
#define XML_PM_TYPE_PRINTORIENTATION	(XML_PM_TYPES_START +  4)
#define XML_PM_TYPE_PRINTANNOTATIONS	(XML_PM_TYPES_START +  5)
#define XML_PM_TYPE_PRINTCHARTS			(XML_PM_TYPES_START +  6)
#define XML_PM_TYPE_PRINTDRAWING		(XML_PM_TYPES_START +  7)
#define XML_PM_TYPE_PRINTFORMULAS		(XML_PM_TYPES_START +  8)
#define XML_PM_TYPE_PRINTGRID			(XML_PM_TYPES_START +  9)
#define XML_PM_TYPE_PRINTHEADERS		(XML_PM_TYPES_START + 10)
#define XML_PM_TYPE_PRINTOBJECTS		(XML_PM_TYPES_START + 11)
#define XML_PM_TYPE_PRINTZEROVALUES		(XML_PM_TYPES_START + 12)
#define XML_PM_TYPE_PRINTPAGEORDER		(XML_PM_TYPES_START + 13)
#define XML_PM_TYPE_FIRSTPAGENUMBER		(XML_PM_TYPES_START + 14)
#define XML_PM_TYPE_CENTER_HORIZONTAL	(XML_PM_TYPES_START + 15)
#define XML_PM_TYPE_CENTER_VERTICAL		(XML_PM_TYPES_START + 16)

// control flags
#define CTF_PM_FLAGMASK					(XML_PM_CTF_START + 0x0F00)
#define CTF_PM_HEADERFLAG				(XML_PM_CTF_START + 0x0100)
#define CTF_PM_FOOTERFLAG				(XML_PM_CTF_START + 0x0200)
#define CTF_PM_PRINTMASK                (XML_PM_CTF_START + 0x1000)
// page master
#define CTF_PM_BORDERALL				(XML_PM_CTF_START + 0x0001)
#define CTF_PM_BORDERTOP				(XML_PM_CTF_START + 0x0002)
#define CTF_PM_BORDERBOTTOM				(XML_PM_CTF_START + 0x0003)
#define CTF_PM_BORDERLEFT				(XML_PM_CTF_START + 0x0004)
#define CTF_PM_BORDERRIGHT				(XML_PM_CTF_START + 0x0005)
#define CTF_PM_BORDERWIDTHALL			(XML_PM_CTF_START + 0x0006)
#define CTF_PM_BORDERWIDTHTOP			(XML_PM_CTF_START + 0x0007)
#define CTF_PM_BORDERWIDTHBOTTOM		(XML_PM_CTF_START + 0x0008)
#define CTF_PM_BORDERWIDTHLEFT			(XML_PM_CTF_START + 0x0009)
#define CTF_PM_BORDERWIDTHRIGHT			(XML_PM_CTF_START + 0x000A)
#define CTF_PM_PADDINGALL				(XML_PM_CTF_START + 0x000B)
#define CTF_PM_PADDINGTOP				(XML_PM_CTF_START + 0x000C)
#define CTF_PM_PADDINGBOTTOM			(XML_PM_CTF_START + 0x000D)
#define CTF_PM_PADDINGLEFT				(XML_PM_CTF_START + 0x000E)
#define CTF_PM_PADDINGRIGHT				(XML_PM_CTF_START + 0x000F)
#define CTF_PM_TEXTCOLUMNS				(XML_PM_CTF_START + 0x0010)
#define CTF_PM_REGISTER_STYLE			(XML_PM_CTF_START + 0x0011)
#define CTF_PM_PRINT_ANNOTATIONS        (CTF_PM_PRINTMASK|(XML_PM_CTF_START + 0x0012))
#define CTF_PM_PRINT_CHARTS             (CTF_PM_PRINTMASK|(XML_PM_CTF_START + 0x0013))
#define CTF_PM_PRINT_DRAWING            (CTF_PM_PRINTMASK|(XML_PM_CTF_START + 0x0014))
#define CTF_PM_PRINT_FORMULAS           (CTF_PM_PRINTMASK|(XML_PM_CTF_START + 0x0015))
#define CTF_PM_PRINT_GRID               (CTF_PM_PRINTMASK|(XML_PM_CTF_START + 0x0016))
#define CTF_PM_PRINT_HEADERS            (CTF_PM_PRINTMASK|(XML_PM_CTF_START + 0x0017))
#define CTF_PM_PRINT_OBJECTS            (CTF_PM_PRINTMASK|(XML_PM_CTF_START + 0x0018))
#define CTF_PM_PRINT_ZEROVALUES         (CTF_PM_PRINTMASK|(XML_PM_CTF_START + 0x0019))
#define CTF_PM_MARGINALL                (XML_PM_CTF_START + 0x001A)
#define CTF_PM_MARGINTOP                (XML_PM_CTF_START + 0x001B)
#define CTF_PM_MARGINBOTTOM             (XML_PM_CTF_START + 0x001C)
#define CTF_PM_MARGINLEFT               (XML_PM_CTF_START + 0x001D)
#define CTF_PM_MARGINRIGHT              (XML_PM_CTF_START + 0x001E)

#define CTF_PM_PAGEUSAGE				(XML_PM_CTF_START + 0x0031)
#define CTF_PM_GRAPHICPOSITION			(XML_PM_CTF_START + 0x0032)
#define CTF_PM_GRAPHICFILTER			(XML_PM_CTF_START + 0x0033)
#define CTF_PM_GRAPHICURL				(XML_PM_CTF_START + 0x0034)

//UUUUNeed own entries for PageMasterStyleMap since these get *filtered*
// at export time using CTF_PM_FLAGMASK and XML_PM_CTF_START as detector
// to find the first entry for header/footer (!), see 
// SvXMLAutoStylePoolP_Impl::exportXML, look for XML_STYLE_FAMILY_PAGE_MASTER
#define CTF_PM_REPEAT_OFFSET_X          (XML_PM_CTF_START + 0x0035)
#define CTF_PM_REPEAT_OFFSET_Y          (XML_PM_CTF_START + 0x0036)
#define CTF_PM_FILLGRADIENTNAME         (XML_PM_CTF_START + 0x0037)
#define CTF_PM_FILLHATCHNAME            (XML_PM_CTF_START + 0x0038)
#define CTF_PM_FILLBITMAPNAME           (XML_PM_CTF_START + 0x0039)
#define CTF_PM_FILLTRANSNAME            (XML_PM_CTF_START + 0x0040)

#define CTF_PM_SCALETO					(XML_PM_CTF_START + 0x0051)	// calc specific
#define CTF_PM_SCALETOPAGES				(XML_PM_CTF_START + 0x0052)
#define CTF_PM_SCALETOX                 (XML_PM_CTF_START + 0x0053)
#define CTF_PM_SCALETOY                 (XML_PM_CTF_START + 0x0054)
#define CTF_PM_STANDARD_MODE            (XML_PM_CTF_START + 0x0055)
#define CTP_PM_GRID_BASE_WIDTH          (XML_PM_CTF_START + 0x0056)
#define CTP_PM_GRID_SNAP_TO_CHARS       (XML_PM_CTF_START + 0x0057)
// header
#define CTF_PM_HEADERBORDERALL			(CTF_PM_HEADERFLAG|CTF_PM_BORDERALL)
#define CTF_PM_HEADERBORDERTOP			(CTF_PM_HEADERFLAG|CTF_PM_BORDERTOP)
#define CTF_PM_HEADERBORDERBOTTOM		(CTF_PM_HEADERFLAG|CTF_PM_BORDERBOTTOM)
#define CTF_PM_HEADERBORDERLEFT			(CTF_PM_HEADERFLAG|CTF_PM_BORDERLEFT)
#define CTF_PM_HEADERBORDERRIGHT		(CTF_PM_HEADERFLAG|CTF_PM_BORDERRIGHT)
#define CTF_PM_HEADERBORDERWIDTHALL		(CTF_PM_HEADERFLAG|CTF_PM_BORDERWIDTHALL)
#define CTF_PM_HEADERBORDERWIDTHTOP		(CTF_PM_HEADERFLAG|CTF_PM_BORDERWIDTHTOP)
#define CTF_PM_HEADERBORDERWIDTHBOTTOM	(CTF_PM_HEADERFLAG|CTF_PM_BORDERWIDTHBOTTOM)
#define CTF_PM_HEADERBORDERWIDTHLEFT	(CTF_PM_HEADERFLAG|CTF_PM_BORDERWIDTHLEFT)
#define CTF_PM_HEADERBORDERWIDTHRIGHT	(CTF_PM_HEADERFLAG|CTF_PM_BORDERWIDTHRIGHT)
#define CTF_PM_HEADERPADDINGALL			(CTF_PM_HEADERFLAG|CTF_PM_PADDINGALL)
#define CTF_PM_HEADERPADDINGTOP			(CTF_PM_HEADERFLAG|CTF_PM_PADDINGTOP)
#define CTF_PM_HEADERPADDINGBOTTOM		(CTF_PM_HEADERFLAG|CTF_PM_PADDINGBOTTOM)
#define CTF_PM_HEADERPADDINGLEFT		(CTF_PM_HEADERFLAG|CTF_PM_PADDINGLEFT)
#define CTF_PM_HEADERPADDINGRIGHT		(CTF_PM_HEADERFLAG|CTF_PM_PADDINGRIGHT)
#define CTF_PM_HEADERHEIGHT				(CTF_PM_HEADERFLAG|(XML_PM_CTF_START + 0x0031))
#define CTF_PM_HEADERMINHEIGHT			(CTF_PM_HEADERFLAG|(XML_PM_CTF_START + 0x0032))
#define CTF_PM_HEADERDYNAMIC			(CTF_PM_HEADERFLAG|(XML_PM_CTF_START + 0x0033))
#define CTF_PM_HEADERGRAPHICPOSITION	(CTF_PM_HEADERFLAG|(XML_PM_CTF_START + 0x0034))
#define CTF_PM_HEADERGRAPHICFILTER		(CTF_PM_HEADERFLAG|(XML_PM_CTF_START + 0x0035))
#define CTF_PM_HEADERGRAPHICURL			(CTF_PM_HEADERFLAG|(XML_PM_CTF_START + 0x0036))
#define CTF_PM_HEADERMARGINALL          (CTF_PM_HEADERFLAG|CTF_PM_MARGINALL)
#define CTF_PM_HEADERMARGINTOP          (CTF_PM_HEADERFLAG|CTF_PM_MARGINTOP)
#define CTF_PM_HEADERMARGINBOTTOM       (CTF_PM_HEADERFLAG|CTF_PM_MARGINBOTTOM)
#define CTF_PM_HEADERMARGINLEFT         (CTF_PM_HEADERFLAG|CTF_PM_MARGINLEFT)
#define CTF_PM_HEADERMARGINRIGHT        (CTF_PM_HEADERFLAG|CTF_PM_MARGINRIGHT)

//UUUUNeed own entries for PageMasterStyleMap ORed with the CTF_PM_HEADERFLAG
#define CTF_PM_HEADERREPEAT_OFFSET_X    (CTF_PM_HEADERFLAG|CTF_PM_REPEAT_OFFSET_X)
#define CTF_PM_HEADERREPEAT_OFFSET_Y    (CTF_PM_HEADERFLAG|CTF_PM_REPEAT_OFFSET_Y)
#define CTF_PM_HEADERFILLGRADIENTNAME   (CTF_PM_HEADERFLAG|CTF_PM_FILLGRADIENTNAME)
#define CTF_PM_HEADERFILLHATCHNAME      (CTF_PM_HEADERFLAG|CTF_PM_FILLHATCHNAME)
#define CTF_PM_HEADERFILLBITMAPNAME     (CTF_PM_HEADERFLAG|CTF_PM_FILLBITMAPNAME)
#define CTF_PM_HEADERFILLTRANSNAME      (CTF_PM_HEADERFLAG|CTF_PM_FILLTRANSNAME)

// footer
#define CTF_PM_FOOTERBORDERALL			(CTF_PM_FOOTERFLAG|CTF_PM_BORDERALL)
#define CTF_PM_FOOTERBORDERTOP			(CTF_PM_FOOTERFLAG|CTF_PM_BORDERTOP)
#define CTF_PM_FOOTERBORDERBOTTOM		(CTF_PM_FOOTERFLAG|CTF_PM_BORDERBOTTOM)
#define CTF_PM_FOOTERBORDERLEFT			(CTF_PM_FOOTERFLAG|CTF_PM_BORDERLEFT)
#define CTF_PM_FOOTERBORDERRIGHT		(CTF_PM_FOOTERFLAG|CTF_PM_BORDERRIGHT)
#define CTF_PM_FOOTERBORDERWIDTHALL		(CTF_PM_FOOTERFLAG|CTF_PM_BORDERWIDTHALL)
#define CTF_PM_FOOTERBORDERWIDTHTOP		(CTF_PM_FOOTERFLAG|CTF_PM_BORDERWIDTHTOP)
#define CTF_PM_FOOTERBORDERWIDTHBOTTOM	(CTF_PM_FOOTERFLAG|CTF_PM_BORDERWIDTHBOTTOM)
#define CTF_PM_FOOTERBORDERWIDTHLEFT	(CTF_PM_FOOTERFLAG|CTF_PM_BORDERWIDTHLEFT)
#define CTF_PM_FOOTERBORDERWIDTHRIGHT	(CTF_PM_FOOTERFLAG|CTF_PM_BORDERWIDTHRIGHT)
#define CTF_PM_FOOTERPADDINGALL			(CTF_PM_FOOTERFLAG|CTF_PM_PADDINGALL)
#define CTF_PM_FOOTERPADDINGTOP			(CTF_PM_FOOTERFLAG|CTF_PM_PADDINGTOP)
#define CTF_PM_FOOTERPADDINGBOTTOM		(CTF_PM_FOOTERFLAG|CTF_PM_PADDINGBOTTOM)
#define CTF_PM_FOOTERPADDINGLEFT		(CTF_PM_FOOTERFLAG|CTF_PM_PADDINGLEFT)
#define CTF_PM_FOOTERPADDINGRIGHT		(CTF_PM_FOOTERFLAG|CTF_PM_PADDINGRIGHT)
#define CTF_PM_FOOTERHEIGHT				(CTF_PM_FOOTERFLAG|(XML_PM_CTF_START + 0x0031))
#define CTF_PM_FOOTERMINHEIGHT			(CTF_PM_FOOTERFLAG|(XML_PM_CTF_START + 0x0032))
#define CTF_PM_FOOTERDYNAMIC			(CTF_PM_FOOTERFLAG|(XML_PM_CTF_START + 0x0033))
#define CTF_PM_FOOTERGRAPHICPOSITION	(CTF_PM_FOOTERFLAG|(XML_PM_CTF_START + 0x0034))
#define CTF_PM_FOOTERGRAPHICFILTER		(CTF_PM_FOOTERFLAG|(XML_PM_CTF_START + 0x0035))
#define CTF_PM_FOOTERGRAPHICURL			(CTF_PM_FOOTERFLAG|(XML_PM_CTF_START + 0x0036))
#define CTF_PM_FOOTERMARGINALL          (CTF_PM_FOOTERFLAG|CTF_PM_MARGINALL)
#define CTF_PM_FOOTERMARGINTOP          (CTF_PM_FOOTERFLAG|CTF_PM_MARGINTOP)
#define CTF_PM_FOOTERMARGINBOTTOM       (CTF_PM_FOOTERFLAG|CTF_PM_MARGINBOTTOM)
#define CTF_PM_FOOTERMARGINLEFT         (CTF_PM_FOOTERFLAG|CTF_PM_MARGINLEFT)
#define CTF_PM_FOOTERMARGINRIGHT        (CTF_PM_FOOTERFLAG|CTF_PM_MARGINRIGHT)

//UUUUNeed own entries for PageMasterStyleMap ORed with the CTF_PM_FOOTERFLAG
#define CTF_PM_FOOTERREPEAT_OFFSET_X    (CTF_PM_FOOTERFLAG|CTF_PM_REPEAT_OFFSET_X)
#define CTF_PM_FOOTERREPEAT_OFFSET_Y    (CTF_PM_FOOTERFLAG|CTF_PM_REPEAT_OFFSET_Y)
#define CTF_PM_FOOTERFILLGRADIENTNAME   (CTF_PM_FOOTERFLAG|CTF_PM_FILLGRADIENTNAME)
#define CTF_PM_FOOTERFILLHATCHNAME      (CTF_PM_FOOTERFLAG|CTF_PM_FILLHATCHNAME)
#define CTF_PM_FOOTERFILLBITMAPNAME     (CTF_PM_FOOTERFLAG|CTF_PM_FILLBITMAPNAME)
#define CTF_PM_FOOTERFILLTRANSNAME      (CTF_PM_FOOTERFLAG|CTF_PM_FILLTRANSNAME)

#define CTF_PM_FTN_HEIGTH				(XML_PM_CTF_START + 0x0060)
#define CTF_PM_FTN_LINE_WEIGTH			(XML_PM_CTF_START + 0x0061)
#define CTF_PM_FTN_LINE_COLOR			(XML_PM_CTF_START + 0x0062)
#define CTF_PM_FTN_LINE_WIDTH			(XML_PM_CTF_START + 0x0063)
#define CTF_PM_FTN_LINE_ADJUST			(XML_PM_CTF_START + 0x0064)
#define CTF_PM_FTN_LINE_DISTANCE		(XML_PM_CTF_START + 0x0065)
#define CTF_PM_FTN_DISTANCE				(XML_PM_CTF_START + 0x0066)

extern const XMLPropertyMapEntry aXMLPageMasterStyleMap[];
extern const XMLPropertyMapEntry aXMLPageMasterHeaderImportStyleMap[];
extern const XMLPropertyMapEntry aXMLPageMasterFooterImportStyleMap[];

#endif