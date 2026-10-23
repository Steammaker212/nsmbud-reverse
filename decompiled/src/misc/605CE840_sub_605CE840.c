/* sub_605CE840
 * address: 0x605CE840   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CE840(int result, _DWORD *a2, _QWORD *a3, int a4)
{
  int v4; // lr
  int v5; // r12
  bool v6; // zf
  unsigned int v7; // r2
  unsigned int v8; // r5
  unsigned int v9; // r3
  char v10; // r2
  unsigned int v11; // r3

  v4 = FIELD_U8(result, 16);
  FIELD_U8(result, 17) = v4;
  v5 = FIELD_U8(result, 19);
  v6 = v5 == 0;
  if ( FIELD_U8(result, 19) )
  {
    a4 = FIELD_U8(result, 20);
    v6 = a4 == 1;
  }
  if ( !v6 )
  {
    if ( a4 || (*(_QWORD *)(EventMgr__instance + 16) & *a3) == 0 )
      goto LABEL_24;
    FIELD_U8(result, 20) = 1;
  }
  if ( !v4 )
  {
    if ( FIELD_U8(result, 23) )
    {
      --FIELD_U8(result, 23);
      goto LABEL_24;
    }
    v7 = FIELD_U32(result, 4);
    v8 = v7 >> 30;
    FIELD_U8(result, 18) = v7 >> 30;
    v9 = FIELD_U32(result, 8) + v7;
    v10 = 0;
    FIELD_U32(result, 4) = v9;
    if ( v8 != v9 >> 30 )
    {
      v11 = v9 >> 30;
      if ( FIELD_U8(result, 22) )
      {
        if ( v11 != 2 )
        {
          if ( v11 )
            goto LABEL_23;
          goto LABEL_19;
        }
        if ( v5 == 1 )
          FIELD_U8(result, 20) = 2;
LABEL_22:
        FIELD_U8(result, 23) = FIELD_U8(result, 21);
        v10 = 2;
        goto LABEL_23;
      }
      if ( v11 == 3 )
        goto LABEL_22;
      if ( v11 == 1 )
      {
        if ( v5 == 1 )
          FIELD_U8(result, 20) = 2;
LABEL_19:
        FIELD_U8(result, 23) = FIELD_U8(result, 21);
        v10 = 1;
      }
    }
LABEL_23:
    FIELD_U8(result, 24) = v10;
  }
LABEL_24:
  *a2 = (int)(float)(*(float *)result
                   * (float)(*(float *)((char *)sinLutTable + ((FIELD_U32(result, 4) >> 20) & 0xFF0))
                           + (float)((float)((float)(FIELD_U32(result, 4) & 0xFFFFFF)
                                           * *(float *)((char *)&sinLutTable[1]
                                                      + ((FIELD_U32(result, 4) >> 20) & 0xFF0)))
                                   * 0.000000059605)))
      + FIELD_U32(result, 12);
  FIELD_U8(result, 16) = 0;
  return result;
}
