/* sub_608E8770
 * address: 0x608E8770   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E8770(int a1, int a2, int a3)
{
  int v6; // r4
  int v7; // r0
  int v8; // r6
  int v9; // r8
  int *v10; // r7
  int v11; // r1
  int i; // r2
  int v13; // r4
  int v15; // [sp+0h] [bp-8h]
  int v16; // [sp+4h] [bp-4h]
  int (**v17)(); // [sp+8h] [bp+0h] BYREF
  int *v18; // [sp+Ch] [bp+4h]
  int v19; // [sp+10h] [bp+8h]
  int v20; // [sp+14h] [bp+Ch] BYREF

  v18 = &v20;
  v17 = &BufferedSafeStringBase_char_vtable_probably;
  v19 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v17);
  *(_BYTE *)v18 = 0;
  v17 = &off_60BD4C20;
  if ( sub_608E8EFC(&v17, a2) != 1 )
  {
    v13 = FIELD_U32(a1, 28);
    if ( !v13 )
      return 0;
    goto LABEL_18;
  }
  v6 = FIELD_U32(a1, 20);
  v7 = a1 + 16;
  v8 = 0;
  v16 = v7;
  if ( v6 != v7 )
  {
    v15 = a3;
    while ( 1 )
    {
      v9 = FIELD_U32(v6, 8);
      (*(void (__fastcall **)(int))(FIELD_U32(v9, 32) + 12))(v9 + 32);
      (*(void (__fastcall **)(int))(FIELD_U32(v9, 32) + 12))(v9 + 32);
      v10 = *(int **)(v9 + 36);
      ((void (__fastcall *)(int (***)()))v17[3])(&v17);
      if ( v10 == v18 )
        break;
      v11 = FIELD_U32(v9, 36);
      for ( i = 1; *(unsigned __int8 *)(v11 + i - 1) == *((unsigned __int8 *)v18 + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(v11 + i - 1) )
          goto LABEL_17;
        if ( i > 0x80000 || *(unsigned __int8 *)(v11 + i) != *((unsigned __int8 *)v18 + i) )
          break;
        if ( !*(_BYTE *)(v11 + i) )
          goto LABEL_17;
      }
      v6 = FIELD_U32(v6, 4);
      if ( v6 == v16 )
        return v8;
    }
LABEL_17:
    v13 = FIELD_U32(v6, 8);
    a3 = v15;
    if ( v13 )
    {
LABEL_18:
      if ( a3 )
        sub_608E906C(a3, a2);
      return v13;
    }
  }
  return v8;
}
