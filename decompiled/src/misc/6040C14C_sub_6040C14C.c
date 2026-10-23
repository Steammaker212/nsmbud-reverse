/* sub_6040C14C
 * address: 0x6040C14C   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6040C14C(int a1, int a2)
{
  StateMethodExecuter *result; // r0
  int v5; // r0
  int *v6; // r1
  int v7; // r0
  int v8; // r1
  int *v9; // r0
  unsigned __int8 *v10; // r5
  int v11; // r6
  int v12; // r1
  int v13; // r7
  int v14; // r5
  int v15; // [sp+8h] [bp-28h] BYREF
  int (__fastcall *v16)(int); // [sp+Ch] [bp-24h]

  result = *(StateMethodExecuter **)(a1 + 2072);
  if ( (unsigned int)result <= 7 )
  {
    if ( ((1 << (char)result) & 0x55) != 0 )
    {
      v5 = dword_60C99DD4 + 272;
      if ( !dword_60C99DD4 )
        v5 = dword_60C99DEC + 16;
      sub_603FD374(v5);
      sub_6040E820(LevelInfo_instance);
      sub_6081FD80(dword_60CC6D78);
      v15 = 2;
      v16 = sub_600246FC;
      result = (StateMethodExecuter *)SceneMgr_doSceneChange(dword_60CC62E4, a2, (int)&v15, 2, 0);
      if ( result == (StateMethodExecuter *)1 )
      {
        v6 = &dword_60C9A274;
        return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)v6);
      }
    }
    else
    {
      if ( ((1 << (char)result) & 0xA8) == 0 )
      {
        FIELD_U16(dword_60CC6D78, 109048) = 0;
        v15 = 2;
        v16 = DemoScene_create;
        result = (StateMethodExecuter *)SceneMgr_doSceneChange(dword_60CC62E4, a2, (int)&v15, 0, 0);
        if ( result != (StateMethodExecuter *)1 )
          return result;
        v6 = &dword_60C9A254;
        return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)v6);
      }
      v7 = sub_608DE61C(a1 + 2088, FIELD_U32(a1, 2220));
      v8 = 0;
      if ( v7 )
      {
        v9 = (int *)(v7 - 4);
        v8 = 0;
        if ( v9 )
          v8 = *v9;
      }
      v10 = (unsigned __int8 *)&unk_60B02148 + 12 * v8;
      v11 = LevelInfo_instance;
      sub_6040D3A4(LevelInfo_instance, *v10);
      v12 = v10[4];
      v13 = v10[8];
      v14 = v10[9];
      sub_6040D3B8(v11, v12);
      sub_6040D3CC(v11, v13);
      sub_6040D3E0(v11, v14);
      sub_6040D3F4(v11, 1);
      v15 = 2;
      v16 = sub_600246FC;
      result = (StateMethodExecuter *)SceneMgr_doSceneChange(dword_60CC62E4, a2, (int)&v15, 0, 0);
      if ( result == (StateMethodExecuter *)1 )
      {
        v6 = &dword_60C9A2B4;
        return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)v6);
      }
    }
  }
  return result;
}
