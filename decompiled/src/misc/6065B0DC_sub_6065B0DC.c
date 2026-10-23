/* sub_6065B0DC
 * address: 0x6065B0DC   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065B0DC(_DWORD *a1)
{
  char v1; // r12
  int result; // r0
  _DWORD *v4; // r5
  int v5; // r11
  char *v6; // r6
  int v7; // r0
  bool v8; // zf
  int (__fastcall *v9)(_DWORD *, int *); // r2
  int *v10; // r1

  if ( a1[1539] && !*(_QWORD *)(EventMgr__instance + 16) )
  {
    v9 = *(int (__fastcall **)(_DWORD *, int *))(*a1 + 192);
    v10 = &dword_60CB6650;
    return v9(a1, v10);
  }
  result = a1[1537];
  if ( !result )
    return result;
  v4 = (_DWORD *)a1[9];
  if ( v4 == a1 + 8 )
  {
LABEL_14:
    v9 = *(int (__fastcall **)(_DWORD *, int *))(*a1 + 192);
    v10 = &dword_60CB6710;
    return v9(a1, v10);
  }
  v5 = a1[11];
  v6 = (char *)v4 - v5;
  while ( 1 )
  {
    if ( ((unsigned int)&dword_60CB676C & ~(1617277312 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CB676C) )
    {
      dword_60CB6768 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60CB676C);
    }
    v7 = (**(int (__fastcall ***)(char *, int *))v6)(v6, &dword_60CB6768);
    if ( v6 )
    {
      result = v7 ^ 1;
      v8 = result == 0;
      if ( !result )
      {
        result = (unsigned __int8)v6[6944];
        v8 = result == 0;
      }
      if ( v8 )
        return result;
    }
    v4 = (_DWORD *)v4[1];
    v6 = (char *)v4 - v5;
    if ( (char *)v4 - v5 == (char *)a1 - a1[11] + 32 )
      goto LABEL_14;
  }
}
