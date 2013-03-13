/*
 * Core.h
 *
 * Copyright (C) 2007 - 2011 Texas Instruments Incorporated - http://www.ti.com/ 
 * 
 * 
 *  Redistribution and use in source and binary forms, with or without 
 *  modification, are permitted provided that the following conditions 
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright 
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the 
 *    documentation and/or other materials provided with the   
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.                                                                                                                                                                                                                                                                                                         
 */

/* http://srecord.sourceforge.net/ */
const uint16_t coreImage[] =
{
0xF57C, 0xE7A0, 0xFB2E, 0xEFBE, 0xFB3C, 0xFAF2, 0xF96C, 0xF466, 0xF948,
0xF9D2, 0xF836, 0xF5D6, 0xF30C, 0xFA30, 0xFAE0, 0xF9F2, 0xF9B2, 0xF990,
0xF85E, 0xF748, 0x1000, 0x18FF, 0x2500, 0xDFFF, 0xFDFA, 0xFDFF, 0x1000,
0x18FF, 0x2500, 0xDFFF, 0x1000, 0x10FF, 0x0200, 0x09FF, 0x1100, 0x18FF,
0x0100, 0x0080, 0x0040, 0x0001, 0x1C7C, 0x2142, 0x8205, 0x0000, 0x0000,
0x0101, 0x0101, 0x1C74, 0xDFFE, 0xFDDA, 0xFFFF, 0xFFFF, 0x0000, 0x0100,
0xFFFF, 0xFFFF, 0x0000, 0x0100, 0xFFFF, 0xFFFF, 0x0000, 0x0100, 0xFFFF,
0xFFFF, 0x0000, 0x0100, 0x1B90, 0x1C7C, 0x4031, 0x24E0, 0x403C, 0x1A2A,
0x403D, 0x0252, 0x12B0, 0xFABC, 0x403C, 0x1A00, 0x403D, 0xE05E, 0x403E,
0x002A, 0x12B0, 0xFB5E, 0x12B0, 0xF7E2, 0x12B0, 0xFB52, 0x120A, 0x120B,
0x120D, 0x120C, 0x120F, 0x120E, 0xD0F2, 0x0040, 0x0021, 0xD3D2, 0x1B5C,
0xB0F2, 0x00A0, 0x0072, 0x2002, 0x434E, 0x3C01, 0x435E, 0x934E, 0x2405,
0x403C, 0x8006, 0x12B0, 0xF8AE, 0x3D46, 0x425E, 0x0076, 0x4EC2, 0x1C73,
0x407F, 0x0010, 0x421D, 0x1B82, 0x4D6D, 0xF07D, 0x00FC, 0x9F4D, 0x2016,
0x907E, 0x0011, 0x2008, 0xB3E2, 0x1C74, 0x2802, 0x12B0, 0xFB12, 0x43C2,
0x1C74, 0x3D2E, 0x907E, 0x0013, 0x2003, 0x42F2, 0x1C74, 0x3D28, 0x9F4E,
0x200A, 0x4FC2, 0x1C78, 0x3D23, 0x9FC2, 0x1C78, 0x2004, 0xDFC2, 0x1C73,
0x43C2, 0x1C78, 0x403A, 0x1A2A, 0x4A6F, 0xB3DF, 0x1A30, 0x2805, 0x403C,
0x8009, 0x12B0, 0xF8AE, 0x3D11, 0x4A6F, 0x5F0F, 0x938F, 0x1A3A, 0x2015,
0x40B2, 0x000A, 0x1B5A, 0x4382, 0x1A44, 0x425E, 0x1C73, 0xB35E, 0x2806,
0x532E, 0x4A6F, 0x5F0F, 0x4E8F, 0x1A3E, 0x3C06, 0x503E, 0x0003, 0x4A6F,
0x5F0F, 0x4E8F, 0x1A3E, 0x4A6F, 0x5F0F, 0x90BF, 0x0104, 0x1A3A, 0x2C37,
0x425E, 0x1C73, 0x4E4D, 0x4A6F, 0x5F0F, 0xB39F, 0x1A3A, 0x2807, 0x108D,
0xDD82, 0x1B88, 0xE292, 0x1B88, 0x1A44, 0x3C02, 0x4D82, 0x1B88, 0x4A6F,
0x5F0F, 0x4F1D, 0x1A32, 0x4A6F, 0x5F0F, 0x4F1C, 0x1A3A, 0x4C0B, 0x531B,
0x4B8F, 0x1A3A, 0x5C0D, 0x4ECD, 0x0000, 0x4A6E, 0x5E0E, 0x4A6F, 0x5F0F,
0x9F9E, 0x1A3A, 0x1A3E, 0x2CC9, 0x4382, 0x1B5A, 0x93B2, 0x1A44, 0x20A0,
0x4A6F, 0x5F0F, 0x4F1F, 0x1A32, 0x90FF, 0x0091, 0x0001, 0x203A, 0x434E,
0x3C06, 0x403C, 0x800A, 0x12B0, 0xF8AE, 0x3CB5, 0x435E, 0x934E, 0x20AC,
0xB3E2, 0x1A4C, 0x2BFA, 0x421F, 0x1B52, 0x4F5E, 0x0002, 0xF07E, 0x003F,
0x4A6F, 0x5F0F, 0x4F1F, 0x1A32, 0x9F5E, 0x0002, 0x23ED, 0x421F, 0x1B52,
0x93CF, 0x0003, 0x2007, 0x4A6F, 0x5F0F, 0x4F1F, 0x1A32, 0x92EF, 0x0000,
0x2810, 0x421B, 0x1B52, 0x4A6F, 0x5F0F, 0x4F1F, 0x1A32, 0x9FDB, 0x0004,
0x0003, 0x23D7, 0xF0F2, 0x00F8, 0x1A4C, 0x4382, 0x1B5E, 0x3C80, 0xF0F2,
0x00F8, 0x1A4C, 0x3C7C, 0x4A6F, 0x5F0F, 0x4F1F, 0x1A32, 0x90FF, 0x0092,
0x0001, 0x4A6F, 0x2039, 0x5F0F, 0x4F1F, 0x1A32, 0x93CF, 0x0002, 0x2010,
0x435C, 0x12B0, 0xF9F2, 0x434C, 0x12B0, 0xF9B2, 0x43C2, 0x1C70, 0x434C,
0x12B0, 0xF1E8, 0x12B0, 0xF27C, 0x12B0, 0xF886, 0x3C5D, 0x434E, 0x3C01,
0x435E, 0x934E, 0x2058, 0x425E, 0x1A4C, 0xF07E, 0x0003, 0x907E, 0x0003,
0x23F6, 0x421B, 0x1B52, 0x4A6F, 0x5F0F, 0x4F1F, 0x1A32, 0x9FDB, 0x0002,
0x0002, 0x23EC, 0x421B, 0x1B52, 0x4A6F, 0x5F0F, 0x4F1F, 0x1A32, 0x9FDB,
0x0004, 0x0003, 0x23E2, 0xC3E2, 0x1A4C, 0x3C3A, 0x5F0F, 0x4F1F, 0x1A32,
0x93CF, 0x0002, 0x200B, 0x4A6F, 0x5F0F, 0x4F1F, 0x1A32, 0x90FF, 0x008B,
0x0001, 0x2003, 0x12B0, 0xF27C, 0x3C2F, 0x4A6F, 0xD3DF, 0x1A30, 0x53D2,
0x1A2A, 0x93E2, 0x1A2A, 0x2821, 0x43C2, 0x1A2A, 0x3C1E, 0x40B2, 0x8003,
0x1A42, 0x4A6F, 0x5F0F, 0x4F1B, 0x1A32, 0x4A6F, 0x5F0F, 0x5F1B, 0x1A3E,
0xEB92, 0xFFFF, 0x1A44, 0xE3B2, 0x1A44, 0x43A2, 0x1B84, 0x43D2, 0x1C75,
0x4A6F, 0x5F0F, 0x4F1F, 0x1A32, 0x4FD2, 0x0002, 0x1C76, 0x40B2, 0x1A42,
0x1B86, 0x4A6F, 0x5F0F, 0x438F, 0x1A3A, 0x4382, 0x1A44, 0xC0F2, 0x0040,
0x0021, 0xC3D2, 0x1B5C, 0x413E, 0x413F, 0x413C, 0x413D, 0x413B, 0x413A,
0x1300, 0x43C2, 0x0022, 0x43C2, 0x002A, 0x43C2, 0x001A, 0x43C2, 0x001E,
0x43C2, 0x0032, 0x43C2, 0x0036, 0x43C2, 0x0026, 0x43C2, 0x002E, 0x43C2,
0x001B, 0x43C2, 0x001F, 0x43C2, 0x0033, 0x43C2, 0x0037, 0x43C2, 0x0021,
0x43C2, 0x0029, 0x43C2, 0x0019, 0x43C2, 0x001D, 0x43C2, 0x0031, 0x43C2,
0x0035, 0xC0F2, 0x0080, 0x0057, 0x430F, 0x3C05, 0x4303, 0x533E, 0x930E,
0x23FC, 0x531F, 0x903F, 0x00FF, 0x2C07, 0xB3E2, 0x0002, 0x2804, 0xC3E2,
0x0002, 0x437E, 0x3FF3, 0xB3E2, 0x0002, 0x2C66, 0xD0F2, 0x0040, 0x001E,
0xC3E2, 0x0002, 0xD0F2, 0x0088, 0x0058, 0xD0F2, 0x0020, 0x0032, 0xD0F2,
0x0020, 0x0033, 0x40B2, 0x1B00, 0x1B76, 0x40B2, 0x00B7, 0x1B78, 0x43C2,
0x1C72, 0xC0F2, 0x0020, 0x0021, 0xD0F2, 0x0040, 0x0021, 0xD0F2, 0x0060,
0x0022, 0x43C2, 0x002A, 0xD0F2, 0x0030, 0x001B, 0xD0F2, 0x0010, 0x001A,
0xD0F2, 0x003F, 0x001D, 0xD0F2, 0x003F, 0x001E, 0xD0F2, 0x000B, 0x0032,
0x40B2, 0x1C71, 0x1B68, 0x43D2, 0x1B6A, 0x40B2, 0x1C71, 0x1B72, 0x43E2,
0x1B74, 0x430F, 0x3C02, 0x4303, 0x531F, 0x933F, 0x23FC, 0xC0F2, 0x0040,
0x001E, 0x40B2, 0x1C73, 0x1B82, 0x40B2, 0x1C74, 0x1A00, 0x40B2, 0xFF45,
0x1B7E, 0x40B2, 0x0200, 0x1B80, 0x40B2, 0x000C, 0x1B7A, 0x4382, 0x1B7C,
0x4382, 0x0182, 0x421C, 0x1B76, 0x421D, 0x1B78, 0x403E, 0x0320, 0x430F,
0x12B0, 0xF710, 0x533C, 0x4C82, 0x0192, 0x40B2, 0x02D6, 0x0180, 0x3C75,
0xC0F2, 0x0040, 0x0019, 0xD0F2, 0x0080, 0x0057, 0xD0F2, 0x0040, 0x0057,
0xC032, 0x0020, 0x430F, 0xC3E2, 0x0002, 0x437E, 0x3C02, 0x4303, 0x533E,
0x930E, 0x23FC, 0xB3E2, 0x0002, 0x2802, 0x430F, 0x3C01, 0x531F, 0x903F,
0x000A, 0x2BEF, 0xD3E2, 0x0000, 0xD0F2, 0x00C0, 0x0058, 0x40B2, 0x1200,
0x1B76, 0x40B2, 0x007A, 0x1B78, 0x40F2, 0x0057, 0x1C72, 0x40F2, 0x00FC,
0x0021, 0x40F2, 0x0003, 0x0022, 0xC0F2, 0x0020, 0x0021, 0xD0F2, 0x0040,
0x0021, 0xD0F2, 0x0060, 0x0022, 0xD0F2, 0x0060, 0x0029, 0xD0F2, 0x0060,
0x002A, 0xD0F2, 0x0030, 0x001B, 0xD0F2, 0x0010, 0x001A, 0xD0F2, 0x0015,
0x001D, 0xD0F2, 0x007D, 0x001E, 0xD0F2, 0x000B, 0x0032, 0x40B2, 0x0021,
0x1B68, 0x43D2, 0x1B6A, 0x40B2, 0x0021, 0x1B72, 0x43E2, 0x1B74, 0x40B2,
0x1C73, 0x1B82, 0x40B2, 0x1C74, 0x1A00, 0x40B2, 0xFF55, 0x1B7E, 0x40B2,
0x0140, 0x1B80, 0x40B2, 0x0007, 0x1B7A, 0x4382, 0x1B7C, 0x4382, 0x0182,
0x40B2, 0x270F, 0x0192, 0x40B2, 0x01D6, 0x0180, 0xD0F2, 0x0040, 0x0019,
0xD232, 0x4130, 0x120A, 0x120B, 0x1208, 0x1209, 0x1206, 0x4C0A, 0x433B,
0x4306, 0x9CD2, 0x0001, 0x1A2B, 0x2003, 0x93C2, 0x1A2C, 0x380A, 0x4CD2,
0x0001, 0x1A2B, 0x4C5F, 0x0004, 0x4F82, 0x1A2E, 0xD392, 0x1B9C, 0x3C02,
0xC392, 0x1B9C, 0x93CC, 0x0002, 0x3803, 0xD3A2, 0x1B9C, 0x3C02, 0xC3A2,
0x1B9C, 0x4C08, 0x5328, 0x48E2, 0x1A2C, 0x93C2, 0x1C70, 0x2005, 0x434C,
0x12B0, 0xF9F2, 0x43D2, 0x1C70, 0x90FA, 0x0081, 0x0001, 0x2044, 0xB392,
0x1B9C, 0x2806, 0x4A19, 0x0004, 0x432C, 0x1292, 0xE01A, 0x3C02, 0x4219,
0x1A2E, 0x9309, 0x2004, 0x4A0C, 0x12B0, 0xE900, 0x4C06, 0x9306, 0x202F,
0x407D, 0x0093, 0x486C, 0x1292, 0xE000, 0x90B2, 0x0064, 0x1C66, 0x2802,
0x4382, 0x1C66, 0x421F, 0x1C66, 0x4F0E, 0x531E, 0x4E82, 0x1C66, 0x5F0F,
0x498F, 0x1B9E, 0x4982, 0x1C68, 0x421F, 0x1A26, 0x9F19, 0x0006, 0x2C6B,
0x421F, 0x1B9A, 0x5909, 0x5909, 0x590F, 0x4F1F, 0x0002, 0x930F, 0x2462,
0x421C, 0x1B9C, 0x128F, 0x4C0B, 0x930C, 0x205C, 0x1292, 0xE002, 0x403B,
0x8000, 0x3C57, 0x460B, 0x3C55, 0x4A5E, 0x0001, 0x807E, 0x0051, 0x2436,
0x835E, 0x2439, 0x835E, 0x2440, 0x835E, 0x2443, 0x835E, 0x2446, 0x807E,
0x002D, 0x2409, 0x826E, 0x2413, 0x826E, 0x240B, 0x836E, 0x2415, 0x835E,
0x241B, 0x3C3C, 0x435D, 0x4A0C, 0x12B0, 0xED38, 0x4C0B, 0x3C36, 0x434D,
0x4A0C, 0x12B0, 0xED38, 0x4C0B, 0x3C30, 0x4A5C, 0x0006, 0x12B0, 0xF1E8,
0x4C0B, 0x3C2A, 0x4A5C, 0x0006, 0xD07C, 0x0040, 0x12B0, 0xF8FC, 0x4C0B,
0x3C22, 0x4A5C, 0x0006, 0xD07C, 0x0040, 0x12B0, 0xF8D6, 0x4C0B, 0x3C1A,
0x4A0C, 0x12B0, 0xF6C8, 0x4C0B, 0x3C15, 0x4A0C, 0x12B0, 0xEA2A, 0x4C0B,
0x931C, 0x200F, 0x12B0, 0xF7B2, 0x3C0C, 0x4A0C, 0x12B0, 0xF07C, 0x4C0B,
0x3C07, 0x4A0C, 0x12B0, 0xF4C6, 0x4C0B, 0x3C02, 0x12B0, 0xF62C, 0x903B,
0x8000, 0x2423, 0x930B, 0x380B, 0x407D, 0x0091, 0x486C, 0x1292, 0xE000,
0x4B0C, 0x1292, 0xE008, 0x1292, 0xE002, 0x3C16, 0x407D, 0x0092, 0x486C,
0x1292, 0xE000, 0x4B0C, 0x1292, 0xE008, 0x903B, 0x8002, 0x2009, 0x425C,
0x1A2C, 0x535C, 0xF07C, 0x003F, 0x2001, 0x435C, 0x1292, 0xE008, 0x1292,
0xE002, 0x430C, 0x4030, 0xFAD4, 0x120A, 0x120B, 0x403E, 0x1A46, 0x4E6F,
0xB3DF, 0x1A4C, 0x2CA4, 0x4E6F, 0x5F0F, 0x4F1F, 0x1B52, 0x90FF, 0x0093,
0x0001, 0x4E6F, 0x2407, 0x5F0F, 0x4F1F, 0x1B52, 0xC0FF, 0x0080, 0x0002,
0x3C18, 0x5F0F, 0x4F1F, 0x1B52, 0x93CF, 0x0002, 0x3803, 0x93C2, 0x1C7A,
0x240F, 0x93F2, 0x1C7A, 0x2403, 0x53D2, 0x1C7A, 0x3C02, 0x43D2, 0x1C7A,
0x4E6F, 0x5F0F, 0x4F1F, 0x1B52, 0x42DF, 0x1C7A, 0x0003, 0x4E6F, 0x5F0F,
0x4F1D, 0x1A4E, 0x4E6F, 0x5F0F, 0x4F1F, 0x1B52, 0x4DCF, 0x0000, 0x4E6F,
0x5F0F, 0x4F1F, 0x1B52, 0xB3DF, 0x0000, 0x2C0E, 0x4E6F, 0x5F0F, 0x4F1D,
0x1B52, 0x4E6F, 0x5F0F, 0x4F1C, 0x1A4E, 0x531C, 0x4C8F, 0x1A4E, 0x5C0D,
0x43CD, 0x0000, 0x430D, 0x430C, 0x3C11, 0x4C0A, 0x5A0A, 0x4E6F, 0x5F0F,
0x4F0B, 0x5F0F, 0x5F0F, 0x5F0F, 0x5F0F, 0x5F0F, 0x5F0F, 0x5F0F, 0x5B0F,
0x5F0A, 0xEA1D, 0x1A50, 0x531C, 0x4E6F, 0x5F0F, 0x4F1F, 0x1A4E, 0x531F,
0xC312, 0x100F, 0x9F0C, 0x2BE6, 0xE33D, 0x4E6F, 0x5F0F, 0x4F1B, 0x1A4E,
0x100B, 0x5B0B, 0x4E6F, 0x5F0F, 0x4F0A, 0x5F0F, 0x5F0F, 0x5F0F, 0x5F0F,
0x5F0F, 0x5F0F, 0x5F0F, 0x5A0F, 0x5F0B, 0x4D8B, 0x1A52, 0x4E6F, 0xD3DF,
0x1A4C, 0x4E6F, 0xC2FF, 0x1A4C, 0x4E6F, 0x5F0F, 0x4F1F, 0x1B52, 0x93CF,
0x0002, 0x3802, 0x43C2, 0x1C7A, 0x4E6F, 0x5F0F, 0x4F1F, 0x1B52, 0x90FF,
0x0093, 0x0001, 0x2003, 0x4E6F, 0xD3EF, 0x1A4C, 0x4E6F, 0x5F0F, 0x4F1C,
0x1A4E, 0x503C, 0x0003, 0x12B0, 0xFA12, 0x53D2, 0x1A46, 0x93C2, 0x1A46,
0x2402, 0x43C2, 0x1A46, 0x12B0, 0xFB12, 0x430C, 0x413B, 0x413A, 0x4130,
0x120A, 0x430A, 0x93CC, 0x0006, 0x2034, 0x407D, 0x0093, 0x4C5C, 0x0002,
0x1292, 0xE000, 0x930C, 0x3829, 0x421A, 0xE008, 0x421F, 0x1A26, 0x4F1C,
0x0002, 0x128A, 0x421F, 0x1A26, 0x4F1C, 0x0004, 0x128A, 0x421C, 0x1B7E,
0x128A, 0x421C, 0x1B80, 0x128A, 0x432D, 0x403C, 0xFDD8, 0x1292, 0xE006,
0x432D, 0x403C, 0xFDD8, 0x1292, 0xE006, 0x432C, 0x128A, 0x403C, 0x0102,
0x128A, 0x421C, 0x1B7A, 0x421D, 0x1B7C, 0x1292, 0xE00A, 0x431A, 0x3C56,
0x403A, 0xFFFD, 0x3C53, 0x93DC, 0x0006, 0x201B, 0x421F, 0x1A26, 0x938F,
0x0006, 0x2413, 0x407D, 0x0093, 0x4C5C, 0x0002, 0x1292, 0xE000, 0x930C,
0x3808, 0x421F, 0x1A26, 0x4F1C, 0x0006, 0x1292, 0xE008, 0x431A, 0x3C3B,
0x403A, 0xFFFC, 0x3C38, 0x403A, 0xFFFE, 0x3C35, 0x93EC, 0x0006, 0x2020,
0x407D, 0x0093, 0x4C5C, 0x0002, 0x1292, 0xE000, 0x930C, 0x3815, 0x3C0D,
0x4A0C, 0x1292, 0xE008, 0x421E, 0x1B9A, 0x4A0F, 0x5F0F, 0x5F0F, 0x5F0E,
0x4E2C, 0x1292, 0xE008, 0x531A, 0x421F, 0x1A26, 0x9F1A, 0x0006, 0x2BEE,
0x431A, 0x3C15, 0x403A, 0xFFFB, 0x3C12, 0x90FC, 0x0003, 0x0006, 0x200E,
0x407D, 0x0091, 0x4C5C, 0x0002, 0x1292, 0xE000, 0x930C, 0x3804, 0x1292,
0xE002, 0x403A, 0xFFFA, 0x12B0, 0xFA98, 0x931A, 0x2004, 0x403A, 0x8000,
0x1292, 0xE002, 0x4A0C, 0x413A, 0x4130, 0x120A, 0x120B, 0x1208, 0x1209,
0x1206, 0x4C18, 0x0004, 0x4809, 0x5C19, 0x0008, 0x8329, 0x4336, 0x93D2,
0x1C7B, 0x2076, 0x403B, 0xF522, 0x480C, 0x128B, 0x834C, 0x2407, 0x835C,
0x2408, 0x835C, 0x2409, 0x835C, 0x240A, 0x3C0A, 0xF038, 0xFE00, 0x3C07,
0xF038, 0xFF00, 0x3C04, 0xF038, 0xFF80, 0x3C01, 0xC318, 0x490C, 0x128B,
0x834C, 0x2407, 0x835C, 0x2408, 0x835C, 0x2409, 0x835C, 0x240A, 0x3C0A,
0xF039, 0xFE00, 0x3C07, 0xF039, 0xFF00, 0x3C04, 0xF039, 0xFF80, 0x3C01,
0xC319, 0x490C, 0x128B, 0x4C4C, 0x5C0C, 0x4C1F, 0xE048, 0x5F0F, 0x5F09,
0x4036, 0xFFFE, 0xB318, 0x2C3E, 0x9908, 0x2C3C, 0xB392, 0x012C, 0x2FFD,
0x40B2, 0xA593, 0x012A, 0x40B2, 0xA500, 0x012C, 0x4316, 0x3C0A, 0x907A,
0x0003, 0x2002, 0x43B8, 0x0000, 0x5A0A, 0x4A1F, 0xE048, 0x5F0F, 0x5F08,
0x9908, 0x2C1F, 0x480C, 0x128B, 0x4C4A, 0x480C, 0x12B0, 0xF922, 0x934C,
0x240F, 0x934A, 0x2404, 0x935A, 0x2402, 0x936A, 0x23E6, 0x40B2, 0xA502,
0x0128, 0x43B8, 0x0000, 0xB392, 0x012C, 0x2FFD, 0x3FE2, 0x40B2, 0xA500,
0x0128, 0x40B2, 0xA510, 0x012C, 0x4036, 0xFFFE, 0x40B2, 0xA500, 0x0128,
0x40B2, 0xA510, 0x012C, 0x460C, 0x4030, 0xFAD4, 0x120A, 0x120B, 0x1208,
0x1209, 0x8031, 0x0010, 0x434A, 0xC0F2, 0x0040, 0x0021, 0xC3D2, 0x1B5C,
0x3C20, 0x535A, 0x936A, 0x2801, 0x434A, 0x9A4E, 0x241A, 0x4A4B, 0xB3DB,
0x1A30, 0x2BF6, 0x403D, 0x0014, 0x434C, 0x12B0, 0xF85E, 0x4A4D, 0x403C,
0x1A2A, 0x1292, 0xE00C, 0x4AC2, 0x1C79, 0x5B0B, 0x4B1C, 0x1A32, 0x12B0,
0xE5B6, 0x425A, 0x1C79, 0x4A4F, 0xC3DF, 0x1A30, 0x93C2, 0x1C75, 0x240F,
0x421E, 0x1B86, 0x421D, 0x1B84, 0x425C, 0x1C76, 0x12B0, 0xF67A, 0x43C2,
0x1C75, 0xC0F2, 0x0040, 0x0021, 0xC3D2, 0x1B5C, 0x434B, 0x3C3F, 0x4B48,
0x5808, 0x5808, 0x5808, 0x481F, 0x1A06, 0x421E, 0x1A26, 0x9E1F, 0x0006,
0x2C33, 0x421E, 0x1B9A, 0x5F0F, 0x5F0F, 0x5F0E, 0x4E19, 0x0002, 0x9309,
0x242A, 0x93C8, 0x1A0D, 0x2427, 0x485D, 0x1A0C, 0x485C, 0x1A0B, 0x1292,
0xE000, 0x930C, 0x381F, 0x481C, 0x1A08, 0x410F, 0x120F, 0x430F, 0x431E,
0x4C6D, 0x503D, 0xFFFD, 0x503C, 0x0006, 0x1292, 0xE00E, 0x403C, 0x0003,
0x1289, 0x5321, 0x931C, 0x2009, 0x1292, 0xE002, 0xB3D8, 0x1A0A, 0x2804,
0x485C, 0x1A0B, 0x12B0, 0xF1E8, 0x410C, 0x1292, 0xE010, 0x535B, 0x926B,
0x2BBF, 0x4A4E, 0x3F8F, 0x120A, 0x120B, 0x120D, 0x120C, 0x120F, 0x120E,
0x421F, 0x1A00, 0x93CF, 0x0000, 0x2404, 0x40F2, 0x000A, 0x1C74, 0x3C65,
0x403D, 0x1A47, 0x4D6C, 0x3C0A, 0x53D2, 0x1A47, 0x93C2, 0x1A47, 0x2402,
0x43C2, 0x1A47, 0x9CC2, 0x1A47, 0x2457, 0x4D6F, 0xB3DF, 0x1A4C, 0x2BF2,
0x4D6E, 0x5E0E, 0x4D6F, 0x5F0F, 0x9F9E, 0x1A4E, 0x1A48, 0x4D6F, 0x2C0F,
0x5F0F, 0x4F1E, 0x1B52, 0x4D6F, 0x5F0F, 0x4F1D, 0x1A48, 0x4D0A, 0x531A,
0x4A8F, 0x1A48, 0x5D0E, 0x4EE2, 0x0077, 0x3C3B, 0xC3DF, 0x1A4C, 0x4D6F,
0x5F0F, 0x438F, 0x1A48, 0x4D6C, 0x4D6F, 0xB3EF, 0x1A4C, 0x2C02, 0x4382,
0x1B5E, 0x53D2, 0x1A47, 0x93C2, 0x1A47, 0x2402, 0x43C2, 0x1A47, 0x4D6F,
0xB3DF, 0x1A4C, 0x281C, 0x4D6F, 0x5F0F, 0x4F1F, 0x1B52, 0x4F6E, 0x4D6F,
0x5F0F, 0x9F1E, 0x1A48, 0x2812, 0x4D6F, 0x5F0F, 0x4F1E, 0x1B52, 0x4D6F,
0x5F0F, 0x4F1A, 0x1A48, 0x4A0B, 0x531B, 0x4B8F, 0x1A48, 0x5A0E, 0x4EE2,
0x0077, 0x40B2, 0x0032, 0x1B5E, 0x4D6F, 0xB3DF, 0x1A4C, 0x2C03, 0x9CC2,
0x1A47, 0x23D2, 0x413E, 0x413F, 0x413C, 0x413D, 0x413B, 0x413A, 0x1300,
0x120A, 0x120B, 0x1208, 0x1209, 0x4C08, 0x4D4A, 0x4309, 0x3C01, 0x5319,
0x9229, 0x2C0C, 0x490F, 0x5F0F, 0x5F0F, 0x5F0F, 0x9C9F, 0x0004, 0x1A06,
0x23F5, 0x9CDF, 0x0002, 0x1A0B, 0x23F1, 0x4309, 0x3C01, 0x5319, 0x9229,
0x2C07, 0x490F, 0x5F0F, 0x5F0F, 0x5F0F, 0x93BF, 0x1A06, 0x23F6, 0x9229,
0x2C47, 0x5909, 0x5909, 0x5909, 0x90FC, 0x0006, 0x0000, 0x282B, 0x4C6B,
0x535B, 0x4B0C, 0x12B0, 0xF386, 0x4C89, 0x1A08, 0x930C, 0x241F, 0x430F,
0x3C08, 0x480E, 0x5F0E, 0x491D, 0x1A08, 0x5F0D, 0x4EED, 0x0000, 0x531F,
0x9B0F, 0x2BF6, 0xF35A, 0x4AC9, 0x1A0A, 0x485E, 0x0002, 0xD07E, 0x0040,
0x4EC9, 0x1A0B, 0x40F9, 0x0093, 0x1A0C, 0x4899, 0x0004, 0x1A06, 0x43D9,
0x1A0D, 0x431C, 0x3C1A, 0x403C, 0xFFFC, 0x3C17, 0x4389, 0x1A08, 0xF35A,
0x4AC9, 0x1A0A, 0x4C5E, 0x0002, 0xD07E, 0x0040, 0x4EC9, 0x1A0B, 0x40F9,
0x0093, 0x1A0C, 0x4C99, 0x0004, 0x1A06, 0x43D9, 0x1A0D, 0x431C, 0x3C02,
0x403C, 0xFFFD, 0x4030, 0xFAD6, 0x120D, 0x120C, 0x120F, 0x120E, 0x90B2,
0x000E, 0x011E, 0x205F, 0xD232, 0x93A2, 0x1B5A, 0x2806, 0xB3D2, 0x1B5C,
0x2C03, 0x53B2, 0x1B5A, 0x3C09, 0x9392, 0x1B5A, 0x2006, 0x4382, 0x1B5A,
0x403C, 0x8004, 0x12B0, 0xF8AE, 0x93A2, 0x1B5E, 0x2805, 0x93C2, 0x1C74,
0x2002, 0x53B2, 0x1B5E, 0x425E, 0x1B62, 0x421F, 0x1B64, 0xC312, 0x100F,
0x921F, 0x1B66, 0x7F4F, 0xF35F, 0xF35E, 0xEF4E, 0x421F, 0x1B68, 0x2404,
0xD2DF, 0x1B6A, 0x0000, 0x3C03, 0xC2DF, 0x1B6A, 0x0000, 0x9382, 0x1B66,
0x2403, 0x53B2, 0x1B66, 0x3C06, 0xB3E2, 0x1B62, 0x2803, 0x4292, 0x1B64,
0x1B66, 0x425E, 0x1B6C, 0x421F, 0x1B6E, 0xC312, 0x100F, 0x921F, 0x1B70,
0x7F4F, 0xF35F, 0xF35E, 0xEF4E, 0x421F, 0x1B72, 0x2404, 0xD2DF, 0x1B74,
0x0000, 0x3C03, 0xC2DF, 0x1B74, 0x0000, 0x9382, 0x1B70, 0x2403, 0x53B2,
0x1B70, 0x3C06, 0xB3E2, 0x1B6C, 0x2803, 0x4292, 0x1B6E, 0x1B70, 0x413E,
0x413F, 0x413C, 0x413D, 0x1300, 0x120A, 0x8031, 0x0006, 0x410C, 0x403E,
0xE054, 0x403D, 0x0006, 0x12B0, 0xFB02, 0x12B0, 0xF7B2, 0x90B2, 0x2520,
0x251E, 0x2852, 0x90B2, 0xFDDA, 0x251E, 0x2C4E, 0x421F, 0x1A02, 0x90BF,
0x5137, 0x0000, 0x201F, 0x434A, 0x3C0F, 0x4A4F, 0x5F0F, 0x421E, 0x1A04,
0x5F0E, 0x93BE, 0x0000, 0x2006, 0x93BF, 0x2500, 0x2403, 0x4F9F, 0x2500,
0x24E0, 0x535A, 0x907A, 0x0010, 0x2BEE, 0x421D, 0x251E, 0x421E, 0x1B7A,
0x421F, 0x1B7C, 0x403C, 0xE000, 0x128D, 0x4C82, 0x1A26, 0x421F, 0x1A26,
0x930F, 0x2423, 0x4F92, 0x0008, 0x1B9A, 0x9382, 0x1B9A, 0x241D, 0x434A,
0x3C16, 0x421F, 0x1B9A, 0x4A4E, 0x5E0E, 0x5E0E, 0x5E0F, 0x93BF, 0x0000,
0x240C, 0x90BF, 0xFF00, 0x0000, 0x2808, 0x4AC1, 0x0004, 0x43C1, 0x0005,
0x434D, 0x410C, 0x12B0, 0xED38, 0x535A, 0x421F, 0x1A26, 0x9F1A, 0x0006,
0x2BE5, 0x430C, 0x3C01, 0x433C, 0x5031, 0x0006, 0x413A, 0x4130, 0x120A,
0x120B, 0x1208, 0x1209, 0x1206, 0x1207, 0x4C0B, 0x4D08, 0x430C, 0x9382,
0x1B54, 0x203B, 0x4309, 0x9809, 0x2C4E, 0x4036, 0x1A46, 0x466F, 0x5F0F,
0x90BF, 0x00FF, 0x1A4E, 0x281E, 0x466F, 0x5F0F, 0x4F1F, 0x1B52, 0x4F5A,
0x0001, 0x466F, 0x5F0F, 0x4F1F, 0x1B52, 0x4F57, 0x0002, 0x466F, 0x5F0F,
0x4F1F, 0x1B52, 0xD0FF, 0x0080, 0x0002, 0x403D, 0x0014, 0x434C, 0x12B0,
0xF85E, 0x12B0, 0xE7A0, 0x4A4D, 0x474C, 0x12B0, 0xF57C, 0x466F, 0x5F0F,
0x539F, 0x1A4E, 0x4B07, 0x5907, 0x466F, 0x5F0F, 0x4F1E, 0x1B52, 0x466F,
0x5F0F, 0x5F1E, 0x1A4E, 0x47EE, 0x0000, 0x5319, 0x3FC6, 0x93B2, 0x1B54,
0x2413, 0x4309, 0x3C0B, 0x4B0F, 0x590F, 0x4217, 0x1B54, 0x5217, 0x1B58,
0x4FE7, 0x0000, 0x5319, 0x5392, 0x1B58, 0x9D09, 0x2C04, 0x9292, 0x1B56,
0x1B58, 0x2BEF, 0x4030, 0xFAD2, 0x120A, 0x120B, 0x1208, 0x1209, 0x433F,
0x93D2, 0x1C7B, 0x2054, 0xB392, 0x1B9C, 0x2828, 0x4C92, 0x0004, 0x1C6C,
0x421D, 0x1C6C, 0x4D0A, 0x5C1A, 0x0008, 0x4A82, 0x1C6E, 0x4D82, 0x1C6A,
0x4C0B, 0x503B, 0x000C, 0x4C6E, 0x503E, 0xFFF5, 0xC312, 0x100E, 0x5E0E,
0x4B08, 0x5E08, 0xB31D, 0x2C0C, 0x9A0D, 0x2C0A, 0x40B2, 0xA593, 0x012A,
0x40B2, 0xA500, 0x012C, 0x40B2, 0xA540, 0x0128, 0x3C0D, 0x403F, 0xFFFD,
0x3C0A, 0x4C0B, 0x522B, 0x4C6E, 0x503E, 0xFFFD, 0xC312, 0x100E, 0x5E0E,
0x4B08, 0x5E08, 0x933F, 0x201D, 0x421C, 0x1C6A, 0x12B0, 0xF522, 0x3C07,
0x4BB9, 0x0000, 0x4A5F, 0xE05A, 0x5F0F, 0x5F82, 0x1C6A, 0x4219, 0x1C6A,
0x9219, 0x1C6E, 0x2C0B, 0x980B, 0x2C09, 0x490C, 0x12B0, 0xF522, 0x4C4A,
0x490C, 0x12B0, 0xF80C, 0x934C, 0x23E9, 0x431F, 0x4F0C, 0x4030, 0xFAD6,
0x120A, 0x120B, 0x1208, 0x1209, 0x4C0A, 0x4D0B, 0x4348, 0x3C11, 0x4849,
0x5909, 0x403C, 0x0102, 0x12B0, 0xF386, 0x4C89, 0x1A36, 0x9389, 0x1A36,
0x2002, 0x12B0, 0xFB20, 0x4999, 0x1A36, 0x1A32, 0x5358, 0x9368, 0x2BED,
0x4348, 0x3C04, 0x40B2, 0x1A50, 0x1B52, 0x4358, 0x9348, 0x27FA, 0x43C2,
0x0070, 0x43D2, 0x0070, 0xD0F2, 0x00C0, 0x0004, 0xD0F2, 0x0010, 0x0070,
0x93C2, 0x0057, 0x3803, 0x407E, 0x0020, 0x3C02, 0x407E, 0x0010, 0x4EC2,
0x0071, 0x421C, 0x1B76, 0x421D, 0x1B78, 0x4A0E, 0x4B0F, 0x12B0, 0xF710,
0x4CC2, 0x0074, 0x108C, 0x4CC2, 0x0075, 0x42D2, 0x1C72, 0x0073, 0xC3D2,
0x0070, 0x43C2, 0x1C74, 0xD0F2, 0x00C0, 0x0000, 0x93C2, 0x0076, 0xC0F2,
0x0040, 0x0021, 0xC3D2, 0x1B5C, 0x4030, 0xFAD6, 0x120A, 0x120B, 0x1208,
0x934C, 0x2024, 0x430A, 0x430B, 0x922B, 0x2C3E, 0x4B08, 0x5808, 0x5808,
0x5808, 0x481F, 0x1A06, 0x933F, 0x2416, 0x421E, 0x1B9A, 0x5F0F, 0x5F0F,
0x5F0E, 0x90BE, 0xFF00, 0x0000, 0x2C0D, 0x481C, 0x1A08, 0x930C, 0x2402,
0x12B0, 0xF3F8, 0x4388, 0x1A08, 0x43B8, 0x1A06, 0x43D8, 0x1A0D, 0x531A,
0x531B, 0x3FDE, 0x430B, 0x3C01, 0x531B, 0x922B, 0x2C07, 0x4B0F, 0x5F0F,
0x5F0F, 0x5F0F, 0x9CCF, 0x1A0B, 0x23F6, 0x922B, 0x2C0F, 0x5B0B, 0x5B0B,
0x5B0B, 0x4B1C, 0x1A08, 0x930C, 0x2402, 0x12B0, 0xF3F8, 0x438B, 0x1A08,
0x43BB, 0x1A06, 0x43DB, 0x1A0D, 0x431A, 0x4A0C, 0x4030, 0xFAD8, 0x434F,
0xB0F2, 0x0040, 0x0000, 0x2804, 0xC0F2, 0x0040, 0x0000, 0x435F, 0x43C2,
0x1A2A, 0x434E, 0x3C13, 0x4E4D, 0x43CD, 0x1A30, 0x43C2, 0x1A2B, 0x43C2,
0x1A2C, 0x5D0D, 0x4D1C, 0x1A32, 0x43CC, 0x0000, 0x438D, 0x1A42, 0x438D,
0x1A3A, 0x438D, 0x1A3E, 0x535E, 0x936E, 0x2BEB, 0x4382, 0x1B5A, 0x403D,
0x012C, 0x42D2, 0x0076, 0x1C77, 0x42D2, 0x0076, 0x1C77, 0x42D2, 0x0076,
0x1C77, 0xC0F2, 0x0040, 0x0002, 0xF0F2, 0x000E, 0x0072, 0x434E, 0x3C02,
0x4303, 0x535E, 0x937E, 0x23FC, 0x533D, 0x930D, 0x2404, 0xB0F2, 0x0040,
0x0002, 0x2FE4, 0x934F, 0x2403, 0xD0F2, 0x0040, 0x0000, 0x4130, 0x120A,
0x120B, 0x4C0A, 0x430C, 0x421E, 0x1B8E, 0xB35E, 0x2421, 0x438A, 0x0000,
0x438A, 0x0002, 0x403B, 0xF836, 0x4A0C, 0x128B, 0x930C, 0x2402, 0x433C,
0x3C26, 0x4A0C, 0x531C, 0x128B, 0x930C, 0x2403, 0x403C, 0xFFFE, 0x3C1E,
0x4A0C, 0x532C, 0x128B, 0x930C, 0x2403, 0x403C, 0xFFFD, 0x3C16, 0x503A,
0x0003, 0x4A0C, 0x128B, 0x3C11, 0x9E82, 0x1B8C, 0x2C03, 0x403C, 0xFFFB,
0x3C0B, 0x4EBA, 0x0000, 0x4EBA, 0x0002, 0x52A2, 0x1B8E, 0x9292, 0x1B8E,
0x1B8C, 0x2C01, 0x431C, 0x413B, 0x413A, 0x4130, 0x120A, 0x531C, 0xC31C,
0x421E, 0x1A28, 0x421D, 0xE052, 0x8E0D, 0x4C0F, 0x522F, 0x9F0D, 0x280F,
0x43DE, 0x0000, 0x421F, 0x1A28, 0x5C0F, 0x522F, 0x4F82, 0x1A28, 0x4F8E,
0x0002, 0x421F, 0x1A28, 0x8C0F, 0x4F0C, 0x3C1C, 0x421F, 0xE050, 0x3C02,
0x4F1F, 0x0002, 0x9E0F, 0x2C14, 0x93CF, 0x0000, 0x23F9, 0x4F1D, 0x0002,
0x8F0D, 0x822D, 0x9C0D, 0x2BF3, 0x4F0A, 0x522A, 0x43DF, 0x0000, 0x4A0D,
0x5C0D, 0x4F0C, 0x12B0, 0xFA4C, 0x4A0C, 0x3C01, 0x430C, 0x413A, 0x4130,
0x120A, 0x421E, 0xE050, 0x4E0D, 0x930C, 0x2004, 0x3C2E, 0x4E0D, 0x4E1E,
0x0002, 0x921E, 0x1A28, 0x2C28, 0x4E0F, 0x522F, 0x9F0C, 0x23F6, 0x93CE,
0x0000, 0x2421, 0x4E1F, 0x0002, 0x921F, 0x1A28, 0x2C02, 0x4F0C, 0x3C01,
0x4E0C, 0x4C6A, 0x93CD, 0x0000, 0x2008, 0x934A, 0x2002, 0x4C1F, 0x0002,
0x4F8D, 0x0002, 0x4D0E, 0x3C07, 0x934A, 0x2003, 0x4C9E, 0x0002, 0x0002,
0x43CE, 0x0000, 0x929E, 0x1A28, 0x0002, 0x2002, 0x4E82, 0x1A28, 0x413A,
0x4130, 0x120A, 0x120B, 0x1208, 0x1209, 0x1206, 0x4C0A, 0x4D0B, 0x4E08,
0x4F09, 0x4116, 0x000C, 0x403E, 0x0006, 0x403D, 0x1B8A, 0x460C, 0x12B0,
0xFA80, 0x4296, 0x1B54, 0x000C, 0x4296, 0x1B56, 0x000E, 0x4A82, 0x1B8A,
0x4A0F, 0x5B0F, 0x4F82, 0x1B8C, 0x4A82, 0x1B8E, 0x9318, 0x240B, 0x9308,
0x2003, 0x43B2, 0x1B54, 0x3C02, 0x4882, 0x1B54, 0x4982, 0x1B56, 0x4382,
0x1B58, 0x430C, 0x4030, 0xFAD4, 0x120A, 0x120B, 0x1208, 0x4C0A, 0x4308,
0x430B, 0x90FA, 0x000B, 0x0000, 0x201A, 0x407D, 0x0093, 0x4A5C, 0x0002,
0x1292, 0xE000, 0x930C, 0x380F, 0x4A1B, 0x0004, 0x4B08, 0x5A18, 0x0008,
0x3C04, 0x4B2C, 0x1292, 0xE008, 0x532B, 0x980B, 0x2BFA, 0x403B, 0x8000,
0x3C05, 0x403B, 0x8007, 0x3C02, 0x403B, 0x800B, 0x903B, 0x8000, 0x2002,
0x1292, 0xE002, 0x4B0C, 0x4030, 0xFAD8, 0x434F, 0x434E, 0x3C01, 0x536E,
0x936E, 0x2C08, 0x4E4D, 0x5D0D, 0x9D1C, 0xE03C, 0x2BF8, 0x9C8D, 0xE03E,
0x2BF5, 0x936E, 0x2C02, 0x436F, 0x3C11, 0x434E, 0x3C01, 0x536E, 0x926E,
0x2C08, 0x4E4D, 0x5D0D, 0x9D1C, 0xE040, 0x2BF8, 0x9C8D, 0xE042, 0x2BF5,
0x926E, 0x2C02, 0x407F, 0x0003, 0x934F, 0x2006, 0x503C, 0xDB00, 0x903C,
0x00FF, 0x2C01, 0x435F, 0x4F4C, 0x4130, 0x403E, 0x1A46, 0x4E6F, 0xB0FF,
0x000B, 0x1A4C, 0x2403, 0x93A2, 0x1B5E, 0x2FF6, 0x4E6F, 0xB0FF, 0x000B,
0x1A4C, 0x2405, 0x12B0, 0xFB5A, 0x403C, 0x8007, 0x4130, 0x4E6F, 0x5F0F,
0x4F1F, 0x1B52, 0x4DCF, 0x0001, 0x4E6F, 0x5F0F, 0x4F1F, 0x1B52, 0x4CCF,
0x0002, 0x4E6F, 0x5F0F, 0x4F1F, 0x1B52, 0x43CF, 0x0003, 0x4E6F, 0x5F0F,
0x40BF, 0x0003, 0x1A4E, 0x430C, 0x4130, 0x120A, 0x8321, 0x4C0A, 0x430C,
0x421E, 0x1B8E, 0xB35E, 0x2411, 0x410C, 0x12B0, 0xF836, 0x416D, 0x930C,
0x2007, 0x410C, 0x12B0, 0xF836, 0x416F, 0x108F, 0x5F0D, 0x3C01, 0x433C,
0x4D8A, 0x0000, 0x3C0F, 0x9E82, 0x1B8C, 0x2C03, 0x403C, 0xFFFE, 0x3C09,
0x4EAA, 0x0000, 0x53A2, 0x1B8E, 0x9292, 0x1B8E, 0x1B8C, 0x2C01, 0x431C,
0x5321, 0x413A, 0x4130, 0x120A, 0x430F, 0x403F, 0xFDFC, 0x40B2, 0xA593,
0x012A, 0x40B2, 0xA500, 0x012C, 0x40B2, 0xA502, 0x0128, 0x43BF, 0x0000,
0xB392, 0x012C, 0x2FFD, 0x40B2, 0xA500, 0x0128, 0x40B2, 0xA510, 0x012C,
0x430A, 0x3C06, 0x403D, 0x001E, 0x434C, 0x12B0, 0xF990, 0x531A, 0x903A,
0x0064, 0x2BF7, 0x4382, 0x0120, 0x413A, 0x4130, 0x120A, 0x120B, 0x1208,
0x4D0A, 0x4E0B, 0x407D, 0x0092, 0x1292, 0xE000, 0x930C, 0x3819, 0x930B,
0x2004, 0x4A0C, 0x1292, 0xE008, 0x3C0F, 0x4308, 0x3C08, 0x480E, 0x5E0E,
0x4B0F, 0x5E0F, 0x4F2C, 0x1292, 0xE008, 0x5318, 0x9A08, 0x2C03, 0x9038,
0x007E, 0x2BF3, 0x1292, 0xE002, 0x430C, 0x3C01, 0x433C, 0x4030, 0xFAD8,
0x433F, 0x93CC, 0x0004, 0x2012, 0x43C2, 0x1C7B, 0x40B2, 0xA510, 0x012C,
0x12B0, 0xEEF0, 0x430C, 0x12B0, 0xF748, 0x434C, 0x12B0, 0xF9B2, 0x435C,
0x12B0, 0xF9F2, 0x430F, 0x3C0C, 0x93DC, 0x0004, 0x2009, 0x43D2, 0x1C7B,
0x403C, 0x001E, 0x12B0, 0xF748, 0x12B0, 0xF77E, 0x431F, 0x4F0C, 0x4130,
0x1209, 0x120A, 0x120B, 0x430A, 0x430B, 0x4039, 0x0020, 0x5C0C, 0x6D0D,
0x6A0A, 0x6B0B, 0x8E0A, 0x7F0B, 0x2804, 0xD31C, 0x5339, 0x23F6, 0x3C04,
0x5E0A, 0x6F0B, 0x5339, 0x23F1, 0x4A0E, 0x4B0F, 0x413B, 0x413A, 0x4139,
0x4130, 0xC232, 0x4303, 0x4C0F, 0x5F0F, 0x4F82, 0x1B64, 0x4C82, 0x1B66,
0x4F82, 0x1B6E, 0x4C82, 0x1B70, 0x930C, 0x2406, 0x40F2, 0x0003, 0x1B62,
0x43E2, 0x1B6C, 0x3C04, 0x43C2, 0x1B62, 0x43C2, 0x1B6C, 0xD232, 0x430C,
0x4130, 0x120A, 0x120B, 0x430A, 0x3C11, 0x4A0B, 0x5B0B, 0x5B0B, 0x5B0B,
0x4B1C, 0x1A08, 0x930C, 0x2402, 0x12B0, 0xF3F8, 0x438B, 0x1A08, 0x43BB,
0x1A06, 0x43DB, 0x1A0D, 0x531A, 0x922A, 0x3BED, 0x413B, 0x413A, 0x4130,
0x40B2, 0x1B90, 0x1A26, 0x4382, 0x1B9A, 0x434E, 0x3C0C, 0x4E4F, 0x5F0F,
0x421D, 0x1A04, 0x5F0D, 0x93BD, 0x0000, 0x2003, 0x40BF, 0xFB62, 0x24E0,
0x535E, 0x907E, 0x0010, 0x2BF1, 0x430C, 0x4130, 0x434C, 0x12B0, 0xFB4A,
0x12B0, 0xE386, 0x403C, 0x0800, 0x403D, 0x0007, 0x12B0, 0xF13A, 0x12B0,
0xEEF0, 0x434C, 0x12B0, 0xF9B2, 0x435C, 0x12B0, 0xF9F2, 0x4030, 0xEB3A,
0x434F, 0x434E, 0x3C01, 0x536E, 0x907E, 0x0006, 0x2C08, 0x4E4D, 0x5D0D,
0x9D1C, 0xE028, 0x2BF7, 0x9C8D, 0xE02A, 0x2BF4, 0x907E, 0x0006, 0x2C01,
0x435F, 0x4F4C, 0x4130, 0x430F, 0x9292, 0x1B8E, 0x1B8C, 0x2C02, 0x433F,
0x3C0B, 0x421E, 0x1B8E, 0x4EEC, 0x0000, 0x5392, 0x1B8E, 0x9292, 0x1B8E,
0x1B8C, 0x2C01, 0x431F, 0x4F0C, 0x4130, 0x936C, 0x2C10, 0x4C4C, 0x5C0C,
0x4C0F, 0x5C0C, 0x5C0C, 0x5F0C, 0x938C, 0x1B66, 0x2007, 0x5D0D, 0x4D8C,
0x1B64, 0x4D8C, 0x1B66, 0xC3EC, 0x1B62, 0x430C, 0x4130, 0x403E, 0x0114,
0x430D, 0x403C, 0x1A46, 0x12B0, 0xFA68, 0x4382, 0x1B5E, 0x43C2, 0x1C73,
0x434E, 0x3C04, 0x40B2, 0x1A50, 0x1B52, 0x435E, 0x934E, 0x27FA, 0x4130,
0x120A, 0x4C0A, 0xC0F2, 0x0040, 0x0000, 0x12B0, 0xF27C, 0x4A82, 0x1B84,
0x43D2, 0x1C75, 0x4382, 0x1B86, 0x43C2, 0x1C76, 0xD0F2, 0x0040, 0x0000,
0x413A, 0x4130, 0x907C, 0x0040, 0x240E, 0x430F, 0x3C01, 0x531F, 0x922F,
0x3409, 0x4F0E, 0x5E0E, 0x5E0E, 0x5E0E, 0x9CCE, 0x1A0B, 0x23F6, 0x43DE,
0x1A0D, 0x431C, 0x4130, 0x907C, 0x0040, 0x240E, 0x430F, 0x3C01, 0x531F,
0x922F, 0x3409, 0x4F0E, 0x5E0E, 0x5E0E, 0x5E0E, 0x9CCE, 0x1A0B, 0x23F6,
0x43CE, 0x1A0D, 0x431C, 0x4130, 0x434F, 0x434E, 0x3C01, 0x536E, 0x926E,
0x2C08, 0x4E4D, 0x5D0D, 0x9D1C, 0xE034, 0x2BF8, 0x9C8D, 0xE036, 0x2BF5,
0x926E, 0x2C01, 0x435F, 0x4F4C, 0x4130, 0x120A, 0x4C0A, 0x403E, 0x0006,
0x4C0D, 0x403C, 0x1B8A, 0x12B0, 0xFA80, 0x4A92, 0x000C, 0x1B54, 0x4A92,
0x000E, 0x1B56, 0x430C, 0x413A, 0x4130, 0x4D4D, 0x5D0D, 0x5D0C, 0x4C1E,
0x0008, 0x4E82, 0x1B8A, 0x4E6F, 0x5F0E, 0x4E82, 0x1B8C, 0x421F, 0x1B8A,
0x522F, 0x4F82, 0x1B8E, 0x430C, 0x4130, 0x936C, 0x2C0D, 0x4C4C, 0x5C0C,
0x4C0F, 0x5C0C, 0x5C0C, 0x5F0C, 0x5D0D, 0x4D8C, 0x1B64, 0x4D8C, 0x1B66,
0x43EC, 0x1B62, 0x430C, 0x4130, 0x936C, 0x2C0C, 0x4C4C, 0x5C0C, 0x4C0F,
0x5C0C, 0x5C0C, 0x5F0C, 0x43CC, 0x1B62, 0x438C, 0x1B64, 0x438C, 0x1B66,
0x430C, 0x4130, 0x425F, 0x1A46, 0x5F0F, 0x4F1F, 0x1B52, 0x4F5E, 0x0001,
0x425F, 0x1A46, 0x5F0F, 0x4F1F, 0x1B52, 0x4CCF, 0x0001, 0x4E4C, 0x4130,
0x936C, 0x2C0C, 0x4C4C, 0x5C0C, 0x4C0F, 0x5C0C, 0x5C0C, 0x5F0C, 0x43DC,
0x1B62, 0x438C, 0x1B64, 0x438C, 0x1B66, 0x430C, 0x4130, 0x425F, 0x1A47,
0x5F0F, 0x438F, 0x1A48, 0x425F, 0x1A46, 0x5F0F, 0x4C8F, 0x1A4E, 0x425F,
0x1A46, 0xD3DF, 0x1A4C, 0x4130, 0x8321, 0x4C0D, 0x433C, 0x3C01, 0x533D,
0x930D, 0x2405, 0x410C, 0x12B0, 0xF836, 0x933C, 0x23F8, 0x5321, 0x4130,
0x4C1F, 0x0002, 0x4F0E, 0x8D0E, 0x903E, 0x0005, 0x2806, 0x4D8C, 0x0002,
0x43CD, 0x0000, 0x4F8D, 0x0002, 0x4130, 0x120A, 0x4C0A, 0x3C03, 0x4DCA,
0x0000, 0x531A, 0x4E0F, 0x533E, 0x930F, 0x23F9, 0x413A, 0x4130, 0x120A,
0x4C0A, 0x3C03, 0x4DFA, 0x0000, 0x531A, 0x4E0F, 0x533E, 0x930F, 0x23F9,
0x413A, 0x4130, 0x430F, 0x3C02, 0x4303, 0x531F, 0x933F, 0x23FC, 0x4382,
0x0120, 0x4130, 0x3C02, 0xC3E2, 0x0002, 0xB3E2, 0x0002, 0x2FFB, 0xD3E2,
0x0000, 0x1300, 0x4C0F, 0x5D0F, 0x3C03, 0x43CC, 0x0000, 0x531C, 0x9F0C,
0x23FB, 0x4130, 0x4135, 0x4134, 0x4137, 0x4136, 0x4139, 0x4138, 0x413B,
0x413A, 0x4130, 0x3C04, 0x4DFC, 0x0000, 0x531C, 0x533E, 0x930E, 0x23FA,
0x430C, 0x4130, 0x120D, 0x120C, 0x422D, 0x410C, 0x12B0, 0xEFBE, 0x5221,
0x4130, 0x120C, 0x4EFC, 0x0000, 0x531C, 0x831D, 0x23FB, 0x413C, 0x4130,
0x40B2, 0x0032, 0x1B5E, 0xD0F2, 0x0080, 0x0002, 0x4130, 0x434C, 0x12B0,
0xF9F2, 0x435C, 0x12B0, 0xF9B2, 0x3FFF, 0x124C, 0x431D, 0x410C, 0x12B0,
0xEFBE, 0x5321, 0x4130, 0x120C, 0x432D, 0x410C, 0x12B0, 0xEFBE, 0x5321,
0x4130, 0x40B2, 0x5A80, 0x0120, 0x4130, 0x4030, 0xFB56, 0x4030, 0xFB64,
0x4030, 0xF886, 0x4030, 0xFA80, 0x1300, 0x3FFF, 0x000B, 0xEC42, 0xE0B0,
0xEE18, 0xFAAA, 0xE088, 0x000F, 0x2112, 0xFEDF,
};

const uint32_t coreImage_address[] =
{
0x0000E000, 0x0000FDD8, 0x0000FDEA, 0x0000FDF2, 0x0000FDF6,
};
const uint32_t coreImage_length_of_sections[] =
{
0x00000DB3, 0x00000001, 0x00000002, 0x00000001, 0x00000005,
};
const uint32_t coreImage_sections    = 0x00000005;
const uint32_t coreImage_termination = 0x00000000;
const uint32_t coreImage_start       = 0x0000E000;
const uint32_t coreImage_finish      = 0x0000FE00;
const uint32_t coreImage_length      = 0x00001E00;

#define COREIMAGE_TERMINATION 0x00000000
#define COREIMAGE_START       0x0000E000
#define COREIMAGE_FINISH      0x0000FE00
#define COREIMAGE_LENGTH      0x00001E00
#define COREIMAGE_SECTIONS    0x00000005
