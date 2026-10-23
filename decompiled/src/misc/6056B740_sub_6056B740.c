/* sub_6056B740
 * address: 0x6056B740   size: 768   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6056B740(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int result; // r0
  char v5; // r12
  unsigned __int8 *v6; // r5
  unsigned __int8 v7; // r0
  unsigned __int8 v8; // r0
  unsigned __int8 v9; // r0
  unsigned __int8 v10; // r0
  unsigned int v11; // r0
  int v12; // r1
  int v13; // r5
  int v14; // r0
  _BYTE *v15; // r2
  int v16; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60CAE6A8 + 8))();
  if ( v3 == result )
  {
    result = FIELD_U32(a1, 7436);
    if ( !result )
    {
      result = sub_6056B4E4(a1);
      FIELD_U8(a1, 7444) = 0;
      if ( result == 2 )
      {
        FIELD_U8(a1, 6850) = 0;
        v15 = (_BYTE *)(a1 + 6850);
        v16 = FIELD_U8(a1, 6916);
        if ( v16 == 255 )
          LOBYTE(v16) = 0;
        *v15 = v16;
        if ( FIELD_U8(a1, 6928) != 255 )
          LOBYTE(v16) = FIELD_U8(a1, 6928);
        *v15 = v16;
        if ( FIELD_U8(a1, 6940) != 255 )
          LOBYTE(v16) = FIELD_U8(a1, 6940);
        *v15 = v16;
        if ( FIELD_U8(a1, 6952) != 255 )
          LOBYTE(v16) = FIELD_U8(a1, 6952);
        *v15 = v16;
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB0558);
        FIELD_U8(a1, 6846) = 2;
        FIELD_U32(a1, 6864) = 3;
      }
      else
      {
        if ( result != 1 )
          return result;
        FIELD_U8(a1, 6850) = 0;
        v6 = (unsigned __int8 *)(a1 + 6850);
        v7 = FIELD_U8(a1, 6917);
        if ( v7 != 255 )
        {
          *v6 = v7;
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
          FIELD_U8(a1, 6917) = -1;
        }
        v8 = FIELD_U8(a1, 6929);
        if ( v8 != 255 )
        {
          *v6 = v8;
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
          FIELD_U8(a1, 6929) = -1;
        }
        v9 = FIELD_U8(a1, 6941);
        if ( v9 != 255 )
        {
          *v6 = v9;
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
          FIELD_U8(a1, 6941) = -1;
        }
        v10 = FIELD_U8(a1, 6953);
        if ( v10 != 255 )
        {
          *v6 = v10;
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
          FIELD_U8(a1, 6953) = -1;
        }
        v11 = *v6;
        v12 = 0;
        if ( v11 < 4 )
          v12 = (char)v11;
        v13 = *(_DWORD *)(PlayerMgr_instance + 4 * v12 + 48);
        if ( ((unsigned int)&dword_60C7B37C & ~(1616296140 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( v13 )
        {
          if ( (**(int (__fastcall ***)(int, int *))v13)(v13, &dword_60C7B378) )
          {
            v14 = FIELD_U32(v13, 1212);
            if ( (v14 & 0xC) != 0 || FIELD_U32(v13, 1208) & 0x8000000 | v14 & 0x1000000 )
              FIELD_U8(a1, 7444) = 1;
          }
        }
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB0534);
        FIELD_U8(a1, 6846) = 1;
        FIELD_U32(a1, 6864) = 2;
      }
      result = dword_60C99DD4;
      FIELD_U8(dword_60C99DD4, 1397) = 1;
    }
  }
  return result;
}
