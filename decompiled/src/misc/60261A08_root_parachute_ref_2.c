/* root_parachute_ref_2
 * address: 0x60261A08   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall root_parachute_ref_2(int a1)
{
  int v2; // r4
  int v3; // r5
  int *v4; // t1
  int v5; // r7
  _DWORD v7[2]; // [sp+0h] [bp-50h] BYREF
  float32x2_t v8[9]; // [sp+8h] [bp-48h] BYREF

  v2 = 0;
  if ( BobOmb_onExecute((Enemy *)a1) == 1 )
  {
    v2 = 1;
    if ( FIELD_U8(a1, 7108) )
    {
      v7[0] = &sead__SafeStringBase__vtable;
      v7[1] = "root_parachute";
      sub_6025FA10(a1, (int)v8, (int)v7);
      v4 = *(int **)(a1 + 7068);
      v3 = a1 + 7068;
      v5 = *v4;
      Mtx34_rotateZ(v8, (unsigned int *)(v3 + 36));
      Mtx34_rotateY(v8, (unsigned int *)(v3 + 32));
      Mtx34_rotateX(v8, (unsigned int *)(v3 + 28));
      (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v5 + 60))(v5, v8);
      (*(void (__fastcall **)(int, int))(*(_DWORD *)v5 + 68))(v5, v3 + 16);
      ModelWrapper_updateModel(*(ModelWrapper **)v3);
    }
  }
  return v2;
}
