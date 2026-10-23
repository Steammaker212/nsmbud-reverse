/* sub_603382C4
 * address: 0x603382C4   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603382C4(int a1)
{
  int result; // r0
  float v3; // s0
  float v4; // s0
  int v5; // r1
  int *v6; // r1

  FIELD_U32(a1, 156) += 0x8000000;
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  result = sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66));
  if ( result <= 1 )
  {
    v4 = CollisionMgr_process((_BYTE *)(a1 + 648), v3);
    result = a1 + 6838;
    switch ( FIELD_U8(a1, 6838) )
    {
      case 0:
        if ( (float)(FIELD_F32(a1, 112) + -16.0) <= FIELD_F32(dword_60CC6484, 124) )
        {
          LOBYTE(v5) = 1;
          goto LABEL_8;
        }
        break;
      case 1:
        v5 = FIELD_U32(a1, 2872) & 1 ^ 3;
        goto LABEL_8;
      case 2:
        if ( (FIELD_U8(a1, 2872) & 1) == 0 )
        {
          LOBYTE(v5) = 3;
LABEL_8:
          *(_BYTE *)result = v5;
        }
        break;
      case 3:
        result = FIELD_U8(a1, 2872);
        if ( (result & 1) != 0 )
        {
          FIELD_U32(a1, 124) = 0;
          FIELD_U32(a1, 156) = 0;
          if ( FIELD_U8(a1, 6705) )
            v6 = &dword_60C94278;
          else
            v6 = &dword_60C94470;
          result = (*(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, v6, v4);
        }
        break;
      default:
        return result;
    }
  }
  return result;
}
