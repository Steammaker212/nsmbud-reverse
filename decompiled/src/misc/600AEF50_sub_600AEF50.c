/* sub_600AEF50
 * address: 0x600AEF50   size: 760   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600AEF50(int a1)
{
  float *v2; // r7
  _DWORD *v3; // r0
  float v4; // s16
  int v5; // r5
  int *v6; // r0
  int *v7; // r0
  unsigned int v8; // r6
  float v9; // s0
  _BYTE *v10; // r6
  char v11; // r12
  char v12; // r12
  float v13; // s0
  float y; // r2
  float z; // r0
  ActorBuildInfo v16; // [sp+0h] [bp-50h] BYREF

  FIELD_U32(a1, 7092) = 0;
  v2 = (float *)(a1 + 7092);
  FIELD_U32(a1, 7096) = 0;
  v3 = (_DWORD *)(a1 + 7096);
  switch ( *(v3 - 3) )
  {
    case 1:
      v4 = 6.0;
      v5 = 8;
      *v3 = 1086324736;
      v6 = &PROFILEID_GOOMBA;
      goto LABEL_10;
    case 2:
      v4 = 0.0;
      *v3 = 0;
      v7 = &dword_60AF3528;
      goto LABEL_8;
    case 3:
      v4 = 0.0;
      v5 = 65537;
      *v3 = 0;
      v6 = &dword_60AF3528;
      goto LABEL_10;
    case 4:
      v4 = 6.0;
      v5 = 1610612736;
      *v3 = 1086324736;
      v6 = &dword_60AF354C;
      goto LABEL_10;
    case 5:
      v4 = 7.0;
      v5 = 3;
      *v3 = 1088421888;
      v6 = &dword_60AF36B4;
      goto LABEL_10;
    case 6:
      v4 = 0.0;
      *v3 = 0;
      *v2 = 3.0;
      v7 = &dword_60AF3534;
LABEL_8:
      v8 = *v7;
      v5 = 0x10000;
      goto LABEL_11;
    case 7:
      v4 = 11.0;
      v5 = 1;
      *v3 = 1093664768;
      v6 = &dword_60AF3484;
LABEL_10:
      v8 = *v6;
LABEL_11:
      memset(&v16.settings2, 0, 40);
      v16.position.x = FIELD_F32(a1, 108);
      v9 = FIELD_F32(a1, 112);
      v16.position.z = FIELD_F32(a1, 116);
      v16.position.y = v4 + v9;
      v16.settings1 = v5;
      v16.profile = Profile__get(v8);
      v10 = ActorMgr__create((void *)ActorMgr__instance, &v16, 0);
      if ( ((unsigned int)&dword_60C7B364 & ~(1611329796 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v10 && (**(int (__fastcall ***)(_BYTE *, int *))v10)(v10, &StageActor_RTTI) == 1 )
      {
        FIELD_U32(a1, 7088) = *((_DWORD *)v10 + 2);
        v10[534] = 0;
        if ( ((unsigned int)dword_60C7B430 & ~(1611329932 << v12) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
        {
          Enemy_RTTI = (int)&off_60BC00C8;
          _cxa_guard_release(dword_60C7B430);
        }
        if ( (**(int (__fastcall ***)(_BYTE *, int *))v10)(v10, &Enemy_RTTI) == 1 )
        {
          if ( *((_DWORD *)v10 + 20) )
          {
            v13 = 0.0;
            *v2 = 0.0;
          }
          else
          {
            v13 = *v2;
          }
          v16.position.x = v13 + v16.position.x;
          y = v16.position.y;
          z = v16.position.z;
          *((_DWORD *)v10 + 27) = LODWORD(v16.position.x);
          *((float *)v10 + 28) = y;
          *((float *)v10 + 29) = z;
          (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v10 + 224))(v10);
        }
      }
      break;
    default:
      return;
  }
}
