/* sub_600E6B40
 * address: 0x600E6B40   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E6B40(int a1)
{
  int v2; // r5
  float v3; // s0
  int v4; // r1
  unsigned int v5; // r0
  int result; // r0
  int v7; // r0
  float v8; // s0

  v2 = a1 + 7096;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v5 )
    v4 += 4 * v5;
  result = *(unsigned __int8 *)(*(_DWORD *)v4 + 28);
  if ( (result & 0x20) != 0 )
  {
    v7 = FIELD_U32(a1, 7496);
    FIELD_U32(a1, 7496) = v7 - 1;
    if ( v7 < 2 )
    {
      if ( FIELD_U8(a1, 8132) )
      {
        (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1708))(a1, v3);
        return (*(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C85234, v8);
      }
      else
      {
        return (*(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C83248, v3);
      }
    }
    else
    {
      return (*(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C8510C, v3);
    }
  }
  return result;
}
