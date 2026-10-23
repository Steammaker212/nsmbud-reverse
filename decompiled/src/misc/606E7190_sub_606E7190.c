/* sub_606E7190
 * address: 0x606E7190   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E7190(Actor *a1, int a2, int a3)
{
  int v3; // r4
  float v5; // s16
  int vtable; // r7
  float v7; // s18
  int ProfileId; // r6
  float v9; // s0
  float v10; // s2
  bool v11; // zf

  v3 = FIELD_U32(a3, 64);
  v5 = *(float *)&a1[1].movementId;
  vtable = a1[1].vtable;
  v7 = FIELD_F32(v3, 108);
  ProfileId = Actor__getProfileId((Actor *)v3);
  if ( ProfileId == Actor__getProfileId(a1) )
  {
    if ( v7 < v5 == vtable )
      goto LABEL_7;
    v9 = *(float *)&a1[1].movementId;
    v10 = FIELD_F32(v3, 108);
    v11 = v10 == v9;
    if ( v10 == v9 )
      v11 = FIELD_U32(v3, 80) == vtable;
    if ( v11 )
    {
LABEL_7:
      a1[1].vtable ^= 1u;
      *(float *)&a1[1].childCount = -*(float *)&a1[1].childCount;
      if ( !LOBYTE(a1[78].field_48) )
      {
        (*(void (__fastcall **)(Actor *))(FIELD_U32(a1, 0x0) + 660))(a1);
        LOBYTE(a1[78].field_48) = 1;
        FIELD_U8(v3, 6312) = 1;
      }
    }
  }
  return 1;
}
