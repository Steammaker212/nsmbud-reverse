/* SE_EMY_LIFT_LINE_MOVE_ref_2
 * address: 0x60813818   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_LIFT_LINE_MOVE_ref_2(int a1, const char *a2, int a3, float *a4, int a5, float *a6)
{
  int *v8; // r4
  int result; // r0
  unsigned int v10; // r0
  int v11; // r1
  int v12; // r5
  unsigned int i; // r3
  _DWORD v14[5]; // [sp+Ch] [bp-14h] BYREF

  v8 = sub_60811D38(a1, a2, a3, a4, a5, a6);
  result = FIELD_U8(dword_60CC6D8C, 17);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    result = strcmp(a2, "SE_EMY_LIFT_LINE_MOVE");
    if ( v8 )
    {
      if ( !result )
      {
        v10 = FIELD_U32(a1, 120);
        if ( v10 )
        {
          v11 = a1 + 140;
          v12 = 0;
          for ( i = 0; i < v10; ++i )
          {
            if ( *(_DWORD *)v11 && *(_DWORD *)(*(_DWORD *)v11 + 220) == 16778594 )
              ++v12;
            v11 += 20;
          }
        }
        else
        {
          v12 = 0;
        }
        sub_608A8604(v14, v8);
        if ( v14[0] )
          sub_608B7240(v14[0], 0xFFFF, (float)((float)v12 * -0.05) + 0.55);
        return sub_608A86F0(v14);
      }
    }
  }
  return result;
}
