/* sub_601D0B7C
 * address: 0x601D0B7C   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D0B7C(int a1)
{
  int *v1; // r6
  char v2; // r12
  int *v3; // r8
  int v4; // r11
  int v5; // r7
  int v6; // r1
  int v7; // r2
  unsigned int v8; // r0
  _DWORD v10[3]; // [sp+14h] [bp-84h] BYREF
  _DWORD v11[30]; // [sp+20h] [bp-78h] BYREF

  sub_6022D890(dword_60C8D864, a1 + 1032);
  v11[0] = 0;
  memset(&v11[2], 0, 72);
  sub_601905DC(v11);
  v11[0] = 85;
  v11[1] = sub_601916C8(dword_60C8996C, 85);
  v1 = (int *)sub_60008598(ActorMgr__instance, 895, FIELD_U32(ActorMgr__instance, 27172));
  v3 = *(int **)(ActorMgr__instance + 27180);
  if ( v1 != v3 )
  {
    v4 = 0;
    do
    {
      v5 = *v1;
      if ( ((unsigned int)&dword_60C8AF48 & ~(1612516484 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AF48) )
      {
        dword_60C8AF44 = (int)&off_60BD4E08;
        _cxa_guard_release(&dword_60C8AF48);
      }
      if ( v5 )
      {
        if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C8AF44) == 1 )
        {
          v6 = FIELD_U32(v5, 244);
          v7 = FIELD_U32(v5, 248);
          v10[0] = FIELD_U32(v5, 240);
          v10[1] = v6;
          v10[2] = v7;
          if ( sub_6022B648(dword_60C8D864, v10) == 1 )
          {
            v8 = v4 + 2;
            ++v4;
            if ( v8 >= 0x12 )
              v8 = 0;
            v11[v8 + 2] = FIELD_U32(v5, 8);
          }
        }
      }
      v1 = (int *)sub_60008598(ActorMgr__instance, 895, (int)(v1 + 1));
    }
    while ( v1 != v3 );
  }
  return sub_60191160((_DWORD *)dword_60C8996C, v11);
}
