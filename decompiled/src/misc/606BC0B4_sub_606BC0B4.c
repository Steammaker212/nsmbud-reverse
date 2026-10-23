/* sub_606BC0B4
 * address: 0x606BC0B4   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606BC0B4(unsigned int *a1, int a2)
{
  float *v4; // r0
  float *v5; // r5

  sub_6000BB08(a1);
  sub_6000BBD4((int)a1, (int (__fastcall ***)(_DWORD, int *))a2);
  v4 = (float *)ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[1]);
  v5 = v4;
  if ( !v4 )
    return 0;
  v4[28] = v4[144] + v4[28];
  if ( a2 )
  {
    (*(void (__fastcall **)(float *, _DWORD))(*(_DWORD *)v4 + 68))(v4, FIELD_S8(a2, 84));
    *((_BYTE *)v5 + 6884) = 1;
    *((_DWORD *)v5 + 1531) |= 0x20u;
    v5[139] = FIELD_F32(a2, 80);
    (*(void (__fastcall **)(float *, int))(*(_DWORD *)v5 + 244))(v5, a2);
    v5[31] = v5[31] + 1.0;
  }
  return 1;
}
