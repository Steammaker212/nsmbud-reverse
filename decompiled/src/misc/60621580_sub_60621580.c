/* sub_60621580
 * address: 0x60621580   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60621580(int a1)
{
  int result; // r0
  _DWORD *v3; // r4
  int v4; // t1
  _DWORD v5[3]; // [sp+4h] [bp-44h] BYREF
  _BYTE v6[12]; // [sp+10h] [bp-38h] BYREF
  int v7; // [sp+1Ch] [bp-2Ch]
  int v8; // [sp+2Ch] [bp-1Ch]
  int v9; // [sp+3Ch] [bp-Ch]

  (*(void (__fastcall **)(_DWORD, int, _BYTE *))(***(_DWORD ***)(a1 + 6300) + 108))(**(_DWORD **)(a1 + 6300), 1, v6);
  v5[0] = v7;
  v5[1] = v8;
  v5[2] = v9;
  v4 = FIELD_U32(a1, 6328);
  v3 = (_DWORD *)(a1 + 6328);
  result = v4;
  *v3 = v4 - 1;
  if ( !v4 )
  {
    IcicleDewHeap_ref((sead_ListNode *)dword_60C99CDC, (int)v5);
    *v3 = 120;
    return 120;
  }
  return result;
}
