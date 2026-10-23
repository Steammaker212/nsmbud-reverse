/* sub_6016F614
 * address: 0x6016F614   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6016F614(int a1, float a2, float a3)
{
  float v4; // s0
  float v5; // s1
  float v6; // s0
  float v7; // s1
  int v8; // r0
  int v9; // r5
  float v10; // s4
  int v12; // [sp+Ch] [bp-1Ch]
  int v13; // [sp+10h] [bp-18h]
  int v14; // [sp+14h] [bp-14h]

  sub_60833AF0(a2, a3);
  FIELD_U32(a1, 848) = v12;
  FIELD_U32(a1, 696) = v13;
  FIELD_U32(a1, 864) = v14;
  sub_60833AF0(v4, v5);
  sub_60833AF0(v6, v7);
  v8 = FIELD_U32(a1, 1024);
  v9 = 0;
  FIELD_U32(a1, 1024) = v8 + 1;
  if ( v8 >= FIELD_U32(a1, 1028) )
  {
    if ( FIELD_U8(a1, 1372) )
    {
      v9 = 1;
      FIELD_U32(a1, 768) = 9;
      FIELD_U32(a1, 776) = 0;
    }
    else
    {
      v10 = FIELD_F32(a1, 868) - FIELD_F32(a1, 652);
      FIELD_F32(a1, 844) = sqrtf(
                               (float)((float)((float)(FIELD_F32(a1, 872) - FIELD_F32(a1, 656))
                                             * (float)(FIELD_F32(a1, 872) - FIELD_F32(a1, 656)))
                                     + (float)(v10 * v10))
                             + (float)((float)(FIELD_F32(a1, 876) - FIELD_F32(a1, 660))
                                     * (float)(FIELD_F32(a1, 876) - FIELD_F32(a1, 660))))
                           + FIELD_F32(a1, 844);
      FIELD_U8(a1, 1372) = 1;
    }
  }
  return v9;
}
