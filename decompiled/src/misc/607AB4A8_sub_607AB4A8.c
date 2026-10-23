/* sub_607AB4A8
 * address: 0x607AB4A8   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AB4A8(int a1)
{
  char v2; // r0
  bool v3; // zf
  int v4; // r5
  int *v5; // r2
  int v6; // r0
  int v7; // r2
  int v9; // r0
  int v10; // r7
  int v11; // r6

  v2 = FIELD_U8(a1, 6900);
  v3 = (v2 & 1) == 0;
  if ( (v2 & 1) == 0 )
    v3 = (FIELD_U8(a1, 1219) & 1) == 0;
  if ( !v3 )
  {
    v4 = 1;
    v5 = &dword_60B0AEE4;
    v6 = a1;
    if ( FIELD_U32(a1, 1320) == 9 )
      v5 = (int *)&unk_60B0AF30;
LABEL_6:
    FIELD_U32(a1, 124) = *v5;
    v7 = sub_607B9CC8(v6, 2, 1);
    Player_changeState(a1, (StateBase *)&dword_60CC4E0C, v7);
    return v4;
  }
  v4 = 0;
  if ( sub_607B9488(a1) != 7 )
    return v4;
  if ( sub_607B939C(a1) != 5
    || (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1)
    || !FIELD_U8(a1, 12917)
    || FIELD_U32(a1, 12920) )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1) != 1 )
      return v4;
    v9 = sub_6079D894(a1);
    if ( !v9 || !FIELD_U8(v9, 12918) )
      return v4;
    v4 = 1;
    v5 = &dword_60B0AEE4;
    if ( FIELD_U32(v9, 1320) != 8 )
      FIELD_U8(v9, 12918) = 0;
    v6 = a1;
    if ( FIELD_U32(a1, 1320) == 9 )
      v5 = (int *)&unk_60B0AF30;
    goto LABEL_6;
  }
  v10 = FIELD_U32(a1, 156);
  Player_changeState(a1, (StateBase *)&dword_60CC50CC, 0);
  v11 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 9928) + 8))(FIELD_U32(a1, 9928));
  v4 = 1;
  if ( v11 != (*(int (**)(void))(dword_60CC50EC + 8))() )
    return v4;
  FIELD_U32(a1, 156) = v10;
  return 1;
}
