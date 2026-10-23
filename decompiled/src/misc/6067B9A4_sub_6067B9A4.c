/* sub_6067B9A4
 * address: 0x6067B9A4   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067B9A4(int a1)
{
  __int64 v1; // r2
  __int64 v2; // r4
  unsigned int v3; // r1
  int result; // r0
  unsigned int v5; // r1
  bool v6; // zf

  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    LODWORD(v1) = (unsigned __int8)(FIELD_U8(a1, 539) - 1) - 32;
    HIDWORD(v1) = 1u >> (33 - FIELD_U8(a1, 539));
    if ( (int)v1 >= 0 )
      HIDWORD(v1) = 1 << v1;
    v2 = *(_QWORD *)(EventMgr__instance + 16);
    HIDWORD(v1) |= HIDWORD(v2);
    HIDWORD(v2) = 1 << (FIELD_U8(a1, 539) - 1);
    if ( (int)v1 >= 0 )
      HIDWORD(v2) = 0;
    LODWORD(v1) = HIDWORD(v2) | v2;
    *(_QWORD *)(EventMgr__instance + 16) = v1;
  }
  v3 = FIELD_U32(a1, 20);
  result = a1 + 6100;
  FIELD_F32(result, 3044) = (float)((v3 >> 8) & 0xF) * 0.5;
  FIELD_U8(result, 3048) = 1;
  v5 = FIELD_U8(result, 3049);
  if ( v5 >= 8 )
    v5 = 8;
  v6 = v5 == 0;
  if ( v5 )
  {
    *(_BYTE *)(*(_DWORD *)result + 336) = 1;
    v6 = v5 == 1;
  }
  if ( !v6 )
  {
    *(_BYTE *)(FIELD_U32(result, 4) + 336) = 1;
    if ( v5 != 2 )
    {
      *(_BYTE *)(FIELD_U32(result, 8) + 336) = 1;
      if ( v5 != 3 )
      {
        *(_BYTE *)(FIELD_U32(result, 12) + 336) = 1;
        if ( v5 != 4 )
        {
          *(_BYTE *)(FIELD_U32(result, 16) + 336) = 1;
          if ( v5 != 5 )
          {
            *(_BYTE *)(FIELD_U32(result, 20) + 336) = 1;
            if ( v5 != 6 )
            {
              *(_BYTE *)(FIELD_U32(result, 24) + 336) = 1;
              if ( v5 != 7 )
              {
                result = FIELD_U32(result, 28);
                FIELD_U8(result, 336) = 1;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
