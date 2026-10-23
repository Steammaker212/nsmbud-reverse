/* sub_602356B4
 * address: 0x602356B4   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602356B4(int a1, int a2)
{
  int result; // r0
  int v4; // r9
  int v5; // r0
  int *v6; // r1
  int v7; // r0
  _DWORD *v8; // r7
  int *v9; // r2
  int i; // r3
  int v11; // r0
  int (**v13)(); // [sp+10h] [bp-B0h] BYREF
  int *v14; // [sp+14h] [bp-ACh]
  int v15; // [sp+18h] [bp-A8h]
  int v16; // [sp+1Ch] [bp-A4h] BYREF

  result = sub_60905330(a2);
  if ( !result )
  {
    v4 = a1 + 4;
    do
    {
      v14 = &v16;
      v13 = &BufferedSafeStringBase_char_vtable_probably;
      v15 = 128;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v13);
      *(_BYTE *)v14 = 0;
      v13 = &off_60BD95A8;
      v5 = sub_60905378(a2);
      sub_60905500(a2, &v13, v5);
      ((void (__fastcall *)(int (***)()))v13[3])(&v13);
      v7 = FIELD_U32(a1, 8);
      if ( v7 == v4 )
        goto LABEL_18;
      v6 = v14;
      while ( 1 )
      {
        v8 = *(_DWORD **)(v7 + 8);
        v9 = (int *)v8[4];
        if ( v9 == v14 )
          break;
        for ( i = 1; *((unsigned __int8 *)v9 + i - 1) == *((unsigned __int8 *)v14 + i - 1); i += 2 )
        {
          if ( !*((_BYTE *)v9 + i - 1) )
            goto LABEL_16;
          if ( i > 0x80000 || *((unsigned __int8 *)v9 + i) != *((unsigned __int8 *)v14 + i) )
            break;
          if ( !*((_BYTE *)v9 + i) )
            goto LABEL_16;
        }
        v7 = FIELD_U32(v7, 4);
        if ( v7 == v4 )
          goto LABEL_18;
      }
LABEL_16:
      if ( !v8 )
      {
LABEL_18:
        v11 = sub_60905394(a2, v6);
        sub_609052FC(a2, v11);
      }
      else
      {
        sub_609052FC(a2, 4);
        (*(void (__fastcall **)(_DWORD *, int))(*v8 + 8))(v8, a2);
      }
      result = sub_60905330(a2);
    }
    while ( result != 1 );
  }
  return result;
}
