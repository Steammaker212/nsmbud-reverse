/* sub_6065ADE4
 * address: 0x6065ADE4   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065ADE4(int a1)
{
  char v1; // r12
  int v3; // r6
  int v4; // r11
  int v5; // r5
  int v6; // r0
  int result; // r0
  bool v8; // zf

  if ( FIELD_U32(a1, 6156) && !*(_QWORD *)(EventMgr__instance + 16) )
  {
    v3 = FIELD_U32(a1, 36);
    if ( v3 != a1 + 32 )
    {
      v4 = FIELD_U32(a1, 44);
      v5 = v3 - v4;
      do
      {
        if ( ((unsigned int)&dword_60C7B36C & ~(1617276536 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B36C) )
        {
          Actor_RTTI = (int)&off_60BC00A4;
          _cxa_guard_release(&dword_60C7B36C);
        }
        v6 = (**(int (__fastcall ***)(int, int *))v5)(v5, &Actor_RTTI);
        if ( v5 && v6 == 1 )
          FIELD_U8(v5, 19) = 1;
        v3 = FIELD_U32(v3, 4);
        v5 = v3 - v4;
      }
      while ( v3 - v4 != a1 + 32 - FIELD_U32(a1, 44) );
    }
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB6650);
  }
  result = FIELD_U8(a1, 6168) - 1;
  v8 = (unsigned __int8)(FIELD_U8(a1, 6168) - 1) == 0;
  FIELD_U8(a1, 6168) = result;
  if ( v8 )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CB66F0);
  return result;
}
