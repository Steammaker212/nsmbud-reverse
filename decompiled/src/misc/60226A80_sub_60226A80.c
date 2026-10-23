/* sub_60226A80
 * address: 0x60226A80   size: 664   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60226A80(int a1, int a2, int a3, float a4)
{
  int *v8; // r0
  int v9; // r1
  bool v10; // cc
  char v11; // r2
  int Resource; // r7
  int v13; // r1
  int v14; // s0
  int v15; // r1
  int v16; // s0
  int (**v17)(); // [sp+4h] [bp+0h] BYREF
  int *v18; // [sp+8h] [bp+4h]
  int v19; // [sp+Ch] [bp+8h]
  int v20; // [sp+10h] [bp+Ch] BYREF

  v18 = &v20;
  v17 = &BufferedSafeStringBase_char_vtable_probably;
  v19 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v17);
  *(_BYTE *)v18 = 0;
  v17 = &off_60BD4C20;
  sub_608FDDF4((int)&v17, "trap");
  if ( a2 == 1 )
  {
    ((void (__fastcall *)(int (***)()))v17[3])(&v17);
    v8 = v18;
    v9 = 0;
    while ( *((_BYTE *)v18 + v9) )
    {
      if ( !*((_BYTE *)v18 + v9 + 1) )
      {
        ++v9;
        break;
      }
      if ( !*((_BYTE *)v18 + v9 + 2) )
      {
        v9 += 2;
        break;
      }
      v10 = v9 + 2 <= 0x7FFFF;
      v9 += 3;
      if ( !v10 )
      {
        v9 = 0;
        break;
      }
    }
    if ( v9 >= v19 - 1 )
      goto LABEL_24;
    v11 = 65;
    goto LABEL_23;
  }
  if ( a2 )
    return;
  ((void (__fastcall *)(int (***)()))v17[3])(&v17);
  v8 = v18;
  v9 = 0;
  while ( *((_BYTE *)v18 + v9) )
  {
    if ( !*((_BYTE *)v18 + v9 + 1) )
    {
      ++v9;
      break;
    }
    if ( !*((_BYTE *)v18 + v9 + 2) )
    {
      v9 += 2;
      break;
    }
    v10 = v9 + 2 <= 0x7FFFF;
    v9 += 3;
    if ( !v10 )
    {
      v9 = 0;
      break;
    }
  }
  if ( v9 < v19 - 1 )
  {
    v11 = 66;
LABEL_23:
    *((_BYTE *)v8 + v9) = v11;
    *((_BYTE *)v8 + v9 + 1) = 0;
  }
LABEL_24:
  Resource = LoadResource(ResourceMgrRelated_instance, (_DWORD *)(a1 + 1792));
  if ( sub_602265DC(Resource, (const char **)&v17) >= 0 )
  {
    SkeletalAnim_play(**(_DWORD **)(FIELD_U32(a1, 12) + 12), Resource, (int)&v17);
    v13 = **(_DWORD **)(FIELD_U32(a1, 12) + 12);
    if ( a3 == 1 )
      v14 = FIELD_U32(v13, 8);
    else
      v14 = 0;
    FIELD_U32(v13, 20) = v14;
    FIELD_U32(v13, 28) |= 2u;
    FIELD_F32(v13, 24) = a4;
    AnimationCtrl_setRepeat((ModelAnimation *)(v13 + 4), 0);
  }
  if ( sub_6043AE64(Resource, &v17) >= 0 )
  {
    ShuAnim_play(**(_DWORD ***)(FIELD_U32(a1, 12) + 28), Resource, (int)&v17);
    v15 = **(_DWORD **)(FIELD_U32(a1, 12) + 28);
    if ( a3 == 1 )
      v16 = FIELD_U32(v15, 8);
    else
      v16 = 0;
    FIELD_U32(v15, 20) = v16;
    FIELD_U32(v15, 28) |= 2u;
    FIELD_F32(v15, 24) = a4;
    AnimationCtrl_setRepeat((ModelAnimation *)(v15 + 4), 0);
  }
}
