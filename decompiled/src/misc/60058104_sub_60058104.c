/* sub_60058104
 * address: 0x60058104   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60058104(_DWORD *a1)
{
  _DWORD *v2; // r6
  _DWORD *v3; // r1
  unsigned int v4; // r0
  _DWORD *v5; // r1
  unsigned int v6; // r0
  _DWORD *v7; // r1
  unsigned int v8; // r0
  _DWORD *v9; // r1
  unsigned int v10; // r0
  _DWORD *v11; // r1
  unsigned int v12; // r0
  _DWORD *v13; // r1
  unsigned int v14; // r0
  int v15; // r1
  unsigned int v16; // r0
  int result; // r0
  Vec3 v18[2]; // [sp+4h] [bp-1Ch] BYREF

  v2 = a1 + 1801;
  j_ModelWrapper_updateAnims(a1[1801]);
  v3 = *(_DWORD **)(*v2 + 12);
  v4 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v4 )
    v3 += v4;
  if ( sub_60418548(*v3 + 4) )
    (*(void (__fastcall **)(_DWORD *))(*a1 + 1172))(a1);
  v5 = *(_DWORD **)(*v2 + 12);
  v6 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v6 )
    v5 += v6;
  if ( sub_60418548(*v5 + 4) )
    goto LABEL_11;
  v7 = *(_DWORD **)(*v2 + 12);
  v8 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v8 )
    v7 += v8;
  if ( sub_60418548(*v7 + 4) )
LABEL_11:
    (*(void (__fastcall **)(_DWORD *))(*a1 + 1324))(a1);
  v9 = *(_DWORD **)(*v2 + 12);
  v10 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v10 )
    v9 += v10;
  if ( sub_60418548(*v9 + 4) )
    goto LABEL_18;
  v11 = *(_DWORD **)(*v2 + 12);
  v12 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v12 )
    v11 += v12;
  if ( sub_60418548(*v11 + 4) )
LABEL_18:
    (*(void (__fastcall **)(_DWORD *, float))(*a1 + 1120))(a1, 0.0);
  v13 = *(_DWORD **)(*v2 + 12);
  v14 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v14 )
    v13 += v14;
  if ( sub_60418548(*v13 + 4) )
  {
    face_1_ref((int)a1, v18);
    sub_602375C4((EffectData *)(a1 + 1865), 1205, v18, 0, 0);
  }
  v15 = *(_DWORD *)(*v2 + 12);
  v16 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v16 )
    v15 += 4 * v16;
  result = *(unsigned __int8 *)(*(_DWORD *)v15 + 28);
  if ( (result & 0x10) != 0 )
    return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C80630);
  return result;
}
