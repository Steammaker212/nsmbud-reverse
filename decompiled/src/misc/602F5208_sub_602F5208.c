/* sub_602F5208
 * address: 0x602F5208   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F5208(int a1)
{
  int v2; // r12
  int *v3; // r2
  int v4; // r3
  int v5; // r3
  int v6; // r0
  int result; // r0

  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 100) = -1103101952;
  v2 = FIELD_U32(a1, 6344);
  v3 = (int *)(a1 + 6340);
  v4 = FIELD_U32(a1, 6340);
  if ( v2 + 0x40000000 < 0 )
  {
    v5 = v4 - 0x100000;
    *v3 = v5;
    if ( v5 <= 13631488 )
      v5 = 13631488;
  }
  else
  {
    v5 = v4 + 0x100000;
    *v3 = v5;
    if ( v5 >= 50331648 )
      v5 = 50331648;
  }
  *v3 = v5;
  FIELD_U32(a1, 6344) = v2 + v5;
  FIELD_U32(a1, 156) = (int)(float)((float)(*(float *)((char *)sinLutTable + (((unsigned int)(v2 + v5) >> 20) & 0xFF0))
                                             + (float)((float)((float)((v2 + v5) & 0xFFFFFF)
                                                             * *(float *)((char *)&sinLutTable[1]
                                                                        + (((unsigned int)(v2 + v5) >> 20) & 0xFF0)))
                                                     * 0.000000059605))
                                     * 83886000.0);
  v6 = FIELD_U32(a1, 6352);
  FIELD_U32(a1, 6352) = v6 - 1;
  if ( v6 < 2 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C92810);
  result = FIELD_U8(dword_60C9CF0C, 1361);
  if ( (result & 1) != 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C92810);
  return result;
}
