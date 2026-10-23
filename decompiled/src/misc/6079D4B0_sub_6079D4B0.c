/* sub_6079D4B0
 * address: 0x6079D4B0   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6079D4B0(int a1, float *a2)
{
  int v4; // r6
  float v5; // s18
  float v6; // s16
  float v7; // s20
  float v8; // s22
  float v9; // [sp+8h] [bp-50h] BYREF
  float v10; // [sp+Ch] [bp-4Ch]
  float v11; // [sp+10h] [bp-48h]
  float v12[17]; // [sp+14h] [bp-44h] BYREF

  v9 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v10 = COERCE_FLOAT("wrist_l1");
  v4 = a1 + 11360;
  sub_60793F04(FIELD_U32(a1, 11360), v12);
  sub_60793F04(*(_DWORD *)v4, &v9);
  v5 = (float)(v12[1] + v10) * 0.5;
  v6 = (float)(v12[2] + v11) * 0.5;
  v7 = (float)(v12[0] + v9) * 0.5;
  if ( FIELD_F32(v4, 808) != 0.0 )
  {
    v8 = FIELD_F32(a1, 112);
    v5 = v5 + (float)(FIELD_F32(v4, 808) * (float)((float)(v8 + sub_607B70FC(a1)) - v5));
  }
  *a2 = v7;
  a2[1] = v5;
  a2[2] = v6;
}
