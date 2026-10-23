/* sub_60273C5C
 * address: 0x60273C5C   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60273C5C(int a1)
{
  int v2; // r5
  int result; // r0
  float v4; // s0

  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = a1 + 6576;
  nullsub_7();
  result = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(a1 + 6576 + 4 * ((result + 18) >> 5) + 2224) & (1 << ((result + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v2 + 4 * ((result + 22) >> 5) + 2224) & (1 << ((result + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v2 + 4 * ((result + 28) >> 5) + 2224) & (1 << ((result + 28) & 0x1F))) == 0 )
  {
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8EB88);
  }
  v4 = FIELD_F32(a1, 6344)
     + (float)((float)byte_60AFE3F4[result] * (float)((float)(((FIELD_U32(a1, 20) >> 8) & 0xFu) + 1) * 16.0));
  if ( result == 1 )
  {
    if ( FIELD_F32(a1, 108) >= v4 )
      return result;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8EB88);
  }
  if ( !result && FIELD_F32(a1, 108) > v4 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8EB88);
  return result;
}
