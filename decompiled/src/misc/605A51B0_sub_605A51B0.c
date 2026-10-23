/* sub_605A51B0
 * address: 0x605A51B0   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A51B0(int a1, int a2)
{
  int (__fastcall *v3)(int, int *); // r2
  int *v4; // r1
  bool v6; // zf
  int v7; // r0
  float v8; // s0
  float v9; // s0

  if ( (FIELD_U8(a1, 27) & 0x20) != 0 )
  {
    v3 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
    v4 = &dword_60CB002C;
  }
  else if ( FIELD_U32(a1, 6880) )
  {
    v3 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
    v4 = &dword_60CAFFE8;
  }
  else
  {
    v6 = a2 == 0;
    if ( a2 )
      v6 = (FIELD_U16(a1, 22) & 0xFF0) == 0;
    if ( v6 )
    {
      if ( sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540)) )
      {
        FIELD_U8(a1, 72322) = FIELD_U8(a1, 539);
        if ( sub_6072A83C(EventMgr__instance) )
        {
          FIELD_U8(a1, 72323) = sub_6072A804(EventMgr__instance, FIELD_U8(a1, 72322));
          FIELD_U64(a1, 72288) = sub_6072A820(EventMgr__instance, FIELD_U8(a1, 72322));
          FIELD_F32(a1, 112) = sub_6072A7D4(EventMgr__instance, FIELD_U8(a1, 72322));
          v8 = sub_6072A7EC(EventMgr__instance, FIELD_U8(a1, 72322));
          FIELD_F32(a1, 6876) = v8;
          v9 = v8 + FIELD_F32(a1, 112);
          FIELD_F32(a1, 6844) = v9;
          if ( (FIELD_U8(a1, 21) & 8) == 0 && FIELD_U8(a1, 6894) )
            FIELD_F32(a1, 6916) = v9;
          FIELD_F32(a1, 6128) = v9;
          FIELD_F32(a1, 6860) = (float)(v9 + FIELD_F32(a1, 6856)) - FIELD_F32(a1, 6116);
          if ( !FIELD_U32(a1, 6836) )
            FIELD_F32(TileMgr_instance, 24) = v9;
        }
        v3 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
        v4 = &dword_60CAFEE8;
      }
      else
      {
        v3 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
        v4 = &dword_60CB0008;
      }
    }
    else
    {
      v7 = FIELD_U8(a1, 540);
      FIELD_U8(a1, 72322) = v7;
      v3 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
      if ( v7 )
        v4 = &dword_60CAFF28;
      else
        v4 = &dword_60CAFF08;
    }
  }
  return v3(a1, v4);
}
