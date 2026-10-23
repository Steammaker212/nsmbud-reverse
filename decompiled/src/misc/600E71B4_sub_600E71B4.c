/* sub_600E71B4
 * address: 0x600E71B4   size: 672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E71B4(int a1)
{
  int *v2; // r7
  float v3; // s0
  _BYTE *v4; // r6
  int *v5; // r5
  int result; // r0
  __int16 *v7; // r4
  int v8; // t1
  unsigned int v9; // r3
  int v10; // r1

  v2 = (int *)(a1 + 7096);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v4 = (_BYTE *)(a1 + 8132);
  if ( !FIELD_U8(a1, 8132) )
  {
    (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1040))(a1, v3);
    sub_600B33DC((int *)a1, 0x4000000);
  }
  v5 = (int *)(a1 + 7092);
  result = FIELD_U32(a1, 7092) - 1;
  switch ( FIELD_U32(a1, 7092) )
  {
    case 1:
      *v5 = 2;
      FIELD_U32(a1, 100) = -1105618534;
      FIELD_U32(a1, 136) = dword_60C852B0;
      v8 = FIELD_S16(a1, 6640);
      v7 = (__int16 *)(a1 + 6640);
      sub_608134CC(v7 - 154, "SE_BOSS_LUDWIG_DOWN", v8, 0);
      result = (unsigned __int8)*v4;
      if ( !*v4 )
        result = sub_608134CC(v7 - 154, "SE_VOC_LUD_LAND", *v7, 0);
      break;
    case 2:
      result = FIELD_U8(a1, 2872);
      if ( (result & 1) != 0 )
      {
        *v5 = 3;
        FIELD_U32(a1, 124) = 0;
        sub_60421AD4(*v2);
        KoopalingBase__vf4D8((float *)a1);
        sub_608134CC(a1 + 6332, "SE_BOSS_LUDWIG_LAND", FIELD_S16(a1, 6640), 0);
        FIELD_U16(a1, 6276) = 30;
        result = 6276;
      }
      break;
    case 3:
      v9 = *(_DWORD *)(*v2 + 68);
      v10 = *(_DWORD *)(*v2 + 12);
      if ( *(_DWORD *)(*v2 + 8) > v9 )
        v10 += 4 * v9;
      if ( (*(_BYTE *)(*(_DWORD *)v10 + 28) & 0x10) != 0 )
        sub_60421AD4(*v2);
      result = FIELD_U16(a1, 6276);
      if ( !FIELD_U16(a1, 6276) )
      {
        if ( !*v4 || (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 56) + 716))(FIELD_U32(a1, 56)) != 1 )
        {
          result = 4;
          goto LABEL_18;
        }
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1708))(a1);
        result = (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C85234);
      }
      break;
    case 4:
      v5 = (int *)(a1 + 7496);
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8510C);
      result = 2;
LABEL_18:
      *v5 = result;
      break;
    default:
      return result;
  }
  return result;
}
