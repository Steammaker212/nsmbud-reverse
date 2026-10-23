/* SE_OBJ_FIREBALL_DISAPP_ref
 * address: 0x600ED650   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_FIREBALL_DISAPP_ref(_DWORD *a1, int a2, int a3)
{
  int v5; // r4
  int v6; // r0
  float v7; // r1
  float v8; // r0
  void (__fastcall *v9)(_DWORD *, int); // r6
  int v10; // r0
  int v11; // r5
  Vec2 v13; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 896))(a1) == 1 )
  {
    v5 = Global_BasicSoundActor2;
    v6 = FIELD_U32(a3, 64);
    v7 = FIELD_F32(v6, 108);
    v8 = FIELD_F32(v6, 112);
    position.x = v7;
    position.y = v8;
    mapPositionToScreen(&v13, &position);
    BasicSoundActor2_play(v5, "SE_OBJ_FIREBALL_DISAPP", &v13.x, 0);
  }
  else
  {
    v9 = *(void (__fastcall **)(_DWORD *, int))(*a1 + 732);
    v10 = (*(int (__fastcall **)(_DWORD *))(*a1 + 736))(a1);
    v9(a1, v10);
    a1[1577] = (*(int (__fastcall **)(_DWORD *))(*a1 + 780))(a1);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 768))(a1);
    if ( (int)a1[1575] <= 0 )
    {
      a1[1575] = 0;
      (*(void (__fastcall **)(_DWORD *))(*a1 + 920))(a1);
      (*(void (__fastcall **)(_DWORD *))(*a1 + 960))(a1);
      (*(void (__fastcall **)(_DWORD *))(*a1 + 1708))(a1);
    }
    else
    {
      v11 = FIELD_U32(a3, 64);
      (*(void (__fastcall **)(_DWORD *))(*a1 + 920))(a1);
      (*(void (__fastcall **)(_DWORD *))(*a1 + 956))(a1);
      (*(void (__fastcall **)(_DWORD *, int))(*a1 + 816))(a1, v11);
    }
  }
  return 1;
}
