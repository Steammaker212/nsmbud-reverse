/* sub_60999C60
 * address: 0x60999C60   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60999C60(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v10; // r4
  int v11; // r0
  unsigned int v12; // r0
  bool v13; // cf
  _DWORD *v14; // r8
  signed int v15; // r12
  int *v16; // r1
  int v17; // r11
  bool v18; // zf
  int v19; // r0
  _BYTE v21[292]; // [sp+24h] [bp-124h] BYREF

  v10 = 0;
  if ( !FIELD_U32(a1, 8) )
  {
    if ( *(_DWORD *)a3 == 1414415942 )
    {
      if ( FIELD_U16(a3, 4) == 65279 )
      {
        v11 = FIELD_U32(a3, 8);
        v10 = 0;
        if ( !((v11 ^ 0x4000000u) >> 24) && (v11 & 0xFE0000u) <= 0x10000 )
        {
          v12 = FIELD_U32(a3, 12);
          v13 = v12 >= 0x24;
          if ( v12 >= 0x24 )
          {
            v12 = FIELD_U16(a3, 16);
            v13 = v12 >= 2;
          }
          if ( v13 )
          {
            v14 = 0;
            v15 = 0;
            v16 = (int *)(a3 + FIELD_U16(a3, 6));
            do
            {
              v17 = *v16;
              if ( *v16 > 1346456898 )
              {
                v18 = v17 == 1346456899;
                if ( v17 != 1346456899 )
                  v18 = v17 == 1347176276;
                if ( !v18 && v17 != 1380404295 )
                {
LABEL_27:
                  FIELD_U32(a1, 12) = a3;
                  return 0;
                }
              }
              else if ( v17 == 1179535686 )
              {
                v14 = v16 + 2;
              }
              else if ( v17 != 1196315211 && v17 != 1212438339 )
              {
                goto LABEL_27;
              }
              ++v15;
              v16 = (int *)((char *)v16 + v16[1]);
            }
            while ( v15 < (int)v12 );
            FIELD_U32(a1, 12) = a3;
            if ( v14 )
            {
              v19 = sub_6099A820(a3, 1196315211);
              sub_6099A170(a1, a3, v14, v19, a4, a5, a6);
              sub_6099A8D4(a1, a2);
              return 1;
            }
            return 0;
          }
        }
      }
    }
    else
    {
      nn__util__SNPrintf(
        (nn__util *)v21,
        (char *)0x100,
        (unsigned int)"Signature check failed ('%c%c%c%c' must be '%c%c%c%c').",
        (const char *)HIBYTE(*(_DWORD *)a3),
        (unsigned __int8)BYTE2(*(_DWORD *)a3),
        BYTE1(*(_DWORD *)a3),
        (unsigned __int8)*(_DWORD *)a3,
        84,
        78,
        70,
        70);
    }
  }
  return v10;
}
