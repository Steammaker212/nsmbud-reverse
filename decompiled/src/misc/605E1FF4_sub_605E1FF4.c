/* sub_605E1FF4
 * address: 0x605E1FF4   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E1FF4(int result, int a2)
{
  bool v2; // zf
  int v3; // r4
  int v4; // r1
  int *v5; // r5
  int v6; // r2
  float v7; // [sp+0h] [bp-20h] BYREF
  float v8; // [sp+4h] [bp-1Ch]
  float v9; // [sp+8h] [bp-18h]
  float v10; // [sp+Ch] [bp-14h]

  v2 = a2 == 0;
  v3 = 0x10000000;
  v5 = (int *)(result + 6264);
  v4 = FIELD_U32(result, 6264);
  if ( !v2 )
    v3 = 0x8000000;
  if ( (v4 & v3) == 0 )
  {
    if ( FIELD_U8(dword_60CC6D78, 109032) )
    {
      if ( !FIELD_U8(result, 19) )
      {
        v6 = FIELD_U32(result, 6260);
        if ( (v6 & 2) == 0 )
        {
          if ( FIELD_U32(result, 6260) & 0x400 | v4 & 0x20000 )
          {
LABEL_9:
            result = *v5 | v3;
            *v5 = result;
            return result;
          }
          if ( (v6 & 0x800) != 0 )
          {
            result = sub_605E42F0(result);
            if ( result )
            {
              result = FIELD_U8(result, 84);
              if ( result != 255 )
                goto LABEL_9;
            }
          }
          else
          {
            v7 = 3.4028e38;
            v8 = 3.4028e38;
            v9 = -3.4028e38;
            v10 = -3.4028e38;
            (*(void (__fastcall **)(int, float *))(*(_DWORD *)result + 408))(result, &v7);
            result = dword_60CC6484;
            if ( v7 <= FIELD_F32(dword_60CC6484, 48)
              && FIELD_F32(dword_60CC6484, 40) <= v9
              && v8 <= FIELD_F32(dword_60CC6484, 52)
              && FIELD_F32(dword_60CC6484, 44) <= v10 )
            {
              goto LABEL_9;
            }
          }
        }
      }
    }
  }
  return result;
}
