/* sub_602C44A4
 * address: 0x602C44A4   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602C44A4(int a1)
{
  int v1; // r9
  int v2; // r4
  unsigned int v3; // r1
  int v4; // r7
  char v5; // r12
  unsigned __int8 *v6; // r7
  unsigned int v7; // t1
  float v8; // s22
  float v9; // s24
  int v10; // [sp+10h] [bp-70h]
  float v12[26]; // [sp+18h] [bp-68h] BYREF

  v1 = 0;
  v2 = a1 + 9488;
  v10 = a1 + 6408;
  do
  {
    v3 = *(_DWORD *)(v2 + 4 * v1);
    if ( v3 )
    {
      v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
      if ( ((unsigned int)dword_60C8DD54 & ~(1613514060 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C8DD54) )
      {
        dword_60C8DD50 = (int)&off_60BC04AC;
        _cxa_guard_release(dword_60C8DD54);
      }
      if ( v4 )
      {
        if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C8DD50) == 1 )
        {
          v7 = FIELD_U8(v4, 6331);
          v6 = (unsigned __int8 *)(v4 + 6331);
          sub_6024A7B4(v12, v10, v7);
          v8 = v12[1];
          v9 = v12[2];
          ((void (__fastcall *)(unsigned __int8 *, float, float, float, float))loc_60832560)(
            v6 - 6223,
            v12[0],
            0.125,
            10.0,
            4.0);
          ((void (__fastcall *)(unsigned __int8 *, float, float, float, float))loc_60832560)(
            v6 - 6219,
            v8,
            0.125,
            10.0,
            4.0);
          *(float *)(v6 - 6215) = v9 - (float)((float)(*v6 + 1) * 10.0);
          *(float *)(v6 - 6175) = v12[3];
          *(float *)(v6 - 6171) = v12[4];
          *(float *)(v6 - 6167) = v12[5];
          *(_DWORD *)(v6 - 6171) = FIELD_U32(a1, 160);
        }
      }
    }
    ++v1;
  }
  while ( v1 != 3 );
}
