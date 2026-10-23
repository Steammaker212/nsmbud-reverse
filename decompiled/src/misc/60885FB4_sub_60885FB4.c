/* sub_60885FB4
 * address: 0x60885FB4   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60885FB4(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10,
        int a11)
{
  *a1 = off_60C5A990;
  sub_608353A4((int)(a1 + 32));
  *((_BYTE *)a1 + 204) = 0;
  sub_6083651C((int)(a1 + 52));
  a1[128] = 0;
  a1[129] = 0;
  a1[130] = 0;
  a1[131] = 0;
  a1[132] = 0;
  a1[133] = 0;
  sub_608353A4((int)(a1 + 134));
  *((_BYTE *)a1 + 612) = 0;
  sub_6083651C((int)(a1 + 154));
  a1[235] = 0;
  a1[234] = 0;
  a1[233] = 0;
  a1[232] = 0;
  a1[231] = 0;
  a1[230] = 0;
  a1[236] = &off_60C5A9A8;
  a1[237] = 0;
  a1[238] = 0;
  a1[239] = 0;
  sub_6088836C(a1 + 250);
  sub_60888704(a1 + 259);
  a1[2] = a2;
  a1[8] = a4;
  a1[7] = a9;
  a1[247] = a11;
  a1[3] = a5;
  a1[4] = a6;
  a1[5] = a7;
  a1[6] = 0;
  a1[246] = 0;
  a1[245] = 0;
  a1[244] = 0;
  a1[243] = 0;
  a1[242] = 0;
  a1[241] = 0;
  a1[240] = 0;
  a1[9] = a8;
  a1[14] = 0;
  a1[13] = 0;
  a1[12] = 0;
  a1[11] = 0;
  a1[10] = 0;
  a1[21] = 0;
  a1[20] = 0;
  a1[19] = 0;
  a1[18] = 0;
  a1[17] = 0;
  a1[16] = 0;
  *((_BYTE *)a1 + 4) = a10;
  a1[25] = 0;
  a1[26] = 0;
  a1[27] = 0;
  a1[29] = 0;
  a1[30] = 0;
  a1[11] = 0;
  *((_BYTE *)a1 + 5) = 1;
  a1[15] = 0;
  a1[22] = 0;
  a1[23] = 0;
  a1[257] = 0;
  a1[28] = 0;
  a1[248] = 0;
  a1[237] = a3;
  a1[249] = 0;
  a1[258] = 0;
  a1[265] = 0;
  if ( !nn__util__BinaryFileHeader__IsSignatureValid_const((nn__util__BinaryFileHeader *)a4, 0x2020202042584656LL) )
    debugPrintRelated2("Binary Tag Error.\n");
  if ( FIELD_U16(a4, 10) != 22 )
  {
    debugPrintRelated("Data    Version:%d\n");
    debugPrintRelated("Runtime Version:%d\n");
    debugPrintRelated2("Binary Version Error!!! Please check your binary file.\n");
  }
  if ( FIELD_U8(a4, 9) != 4 )
  {
    debugPrintRelated("Data    API:%d\n");
    debugPrintRelated("Runtime API:%d\n");
    debugPrintRelated2("Graphic API Unmatched Error!!! Please check your binary file.\n");
  }
  if ( !nn__util__BinaryFileHeader__IsAlignmentValid_const((nn__util__BinaryFileHeader *)a4) )
  {
    nn__util__BinaryFileHeader__GetAlignment_const((nn__util__BinaryFileHeader *)a4);
    debugPrintRelated("Required Alignment:%d\n");
    nn__util__BinaryFileHeader__GetAlignment_const((nn__util__BinaryFileHeader *)a4);
    debugPrintRelated("               Gap:%d\n");
    debugPrintRelated2("Alignment Unmatched Error!!! Please check your binary file.\n");
  }
  sub_60886270(a1, a1[8] + FIELD_U16(a4, 22));
  return a1;
}
