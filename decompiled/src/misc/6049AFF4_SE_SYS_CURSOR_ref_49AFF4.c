/* SE_SYS_CURSOR_ref_49AFF4
 * address: 0x6049AFF4   size: 808   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CURSOR_ref_49AFF4(int a1)
{
  char v1; // r12
  _DWORD *v3; // r5
  int *v4; // r2
  __int64 v5; // r2
  int *v6; // r2

  if ( FIELD_U8(a1, 5352) )
  {
    if ( ((unsigned int)&dword_60CA09F4[1] & ~(1615441952 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA09F4[1]) )
    {
      dword_60CA0A90 = (int)&sead__SafeStringBase__vtable;
      dword_60CA0A94 = dword_60CA0794;
      dword_60CA0A98 = (int)&sead__SafeStringBase__vtable;
      dword_60CA0A9C = dword_60CA0794;
      dword_60CA0AA0 = (int)&sead__SafeStringBase__vtable;
      dword_60CA0AA4 = dword_60CA07A4;
      dword_60CA0AA8 = (int)&sead__SafeStringBase__vtable;
      dword_60CA0AAC = dword_60CA07AC;
      dword_60CA0AB0 = (int)&sead__SafeStringBase__vtable;
      dword_60CA0AB4 = dword_60CA079C;
      sub_60000288();
      _cxa_guard_release(&dword_60CA09F4[1]);
    }
    v3 = (_DWORD *)(a1 + 44);
    sub_60473DE4((_DWORD *)(a1 + 44), 1u, (_DWORD *)&unk_60CA0A50 + 2 * FIELD_U32(a1, 5336) + 16, 0);
    v4 = &dword_60CA07B8;
  }
  else
  {
    if ( FIELD_U8(dword_60CC6D8C, 17) )
    {
      if ( ((unsigned int)&dword_60CA09F4[2] & ~(1615442228 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA09F4[2]) )
      {
        LODWORD(v5) = &sead__SafeStringBase__vtable;
        dword_60CA0AC0[0] = (int)&sead__SafeStringBase__vtable;
        unk_60CA0AC4 = dword_60CA0794;
        unk_60CA0AC8 = &sead__SafeStringBase__vtable;
        HIDWORD(v5) = dword_60CA07AC;
        dword_60CA0ACC = dword_60CA07AC;
        dword_60CA0AD0 = (int)&sead__SafeStringBase__vtable;
        dword_60CA0AD4 = dword_60CA079C;
        dword_60CA0AD8 = (int)&sead__SafeStringBase__vtable;
        dword_60CA0ADC = dword_60CA07A4;
        unk_60CA0AE0 = v5;
        sub_60000288();
        _cxa_guard_release(&dword_60CA09F4[2]);
      }
      v6 = &dword_60CA0AC0[2 * FIELD_U32(a1, 5336)];
    }
    else
    {
      if ( ((unsigned int)&dword_60CA09F4[3] & ~(1615442440 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA09F4[3]) )
      {
        dword_60CA0A70 = (int)&sead__SafeStringBase__vtable;
        dword_60CA0A74 = dword_60CA0794;
        dword_60CA0A78 = (int)&sead__SafeStringBase__vtable;
        dword_60CA0A7C = dword_60CA07AC;
        dword_60CA0A80 = (int)&sead__SafeStringBase__vtable;
        dword_60CA0A84 = dword_60CA0794;
        dword_60CA0A88 = (int)&sead__SafeStringBase__vtable;
        dword_60CA0A8C = dword_60CA07A4;
        sub_60000288();
        _cxa_guard_release(&dword_60CA09F4[3]);
      }
      v6 = (int *)((char *)&unk_60CA0A50 + 8 * FIELD_U32(a1, 5336) + 32);
    }
    v3 = (_DWORD *)(a1 + 44);
    sub_604741D8((_DWORD *)(a1 + 44), 1u, v6, 0);
    v4 = &dword_60CA07B0;
  }
  sub_60473DE4(v3, 0, v4, 0);
  *(_BYTE *)(FIELD_U32(a1, 3696) + 64) &= ~1u;
  return sub_60807EF0(SoundSystem_instance, "SE_SYS_CURSOR", 0, 1);
}
