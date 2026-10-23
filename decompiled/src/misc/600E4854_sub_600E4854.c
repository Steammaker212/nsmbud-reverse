/* sub_600E4854
 * address: 0x600E4854   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E4854(int a1)
{
  int *v2; // r1
  int v3; // r0
  int v4; // r5
  int v5; // r7
  int v6; // r11
  int result; // r0
  int v8; // r2
  float v9; // [sp+14h] [bp-3Ch] BYREF
  float v10; // [sp+18h] [bp-38h]
  float v11; // [sp+1Ch] [bp-34h]

  v2 = (int *)(a1 + 6568);
  v3 = FIELD_U32(a1, 6568) - 1;
  *v2 = v3;
  if ( v3 )
    LightSource_update1((LightSource *)(a1 + 7068), 38, (Vec3 *)(a1 + 108), 0, 0, 0, 0, 0, 0);
  else
    FIELD_U8(a1, 19) = 1;
  v4 = 0;
  v5 = PlayerMgr_instance;
  v6 = PlayerMgr_instance + 32;
  do
  {
    result = FIELD_U16(v5, 66) & (1 << v4);
    if ( (FIELD_U16(v5, 66) & (unsigned __int16)(1 << v4)) != 0 )
    {
      result = sub_6075DE94(dword_60CBF354, &v9, v4);
      if ( sqrtf(
             (float)((float)((float)(v10 - FIELD_F32(a1, 112)) * (float)(v10 - FIELD_F32(a1, 112)))
                   + (float)((float)(v9 - FIELD_F32(a1, 108)) * (float)(v9 - FIELD_F32(a1, 108))))
           + (float)((float)(v11 - v11) * (float)(v11 - v11))) <= 40.0 )
      {
        v8 = sub_6075EDF8(*(_DWORD *)(v6 + 4 * v4));
        if ( v8 )
          v8 = 4;
        result = (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(v6 + 4 * v4) + 1168))(
                   *(_DWORD *)(v6 + 4 * v4),
                   a1,
                   v8);
      }
    }
    ++v4;
  }
  while ( v4 != 4 );
  return result;
}
