/* sub_60943228
 * address: 0x60943228   size: 752   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60943228(_DWORD *a1, int a2, int a3)
{
  int v4; // r4
  int v5; // r0
  bool v6; // cc
  int result; // r0
  int v8; // r10
  _DWORD *v9; // r4
  int v10; // r11
  int v11; // r1
  int v12; // r0
  int v13; // r4
  int v14; // r6
  int v15; // r7
  int v16; // r0
  int i; // r1
  int v18; // r0
  int v19; // [sp+8h] [bp-168h]
  int *v20; // [sp+10h] [bp-160h]
  _DWORD *v21; // [sp+20h] [bp-150h]
  int v24; // [sp+2Ch] [bp-144h] BYREF
  int (**v25)(); // [sp+30h] [bp-140h] BYREF
  int *v26; // [sp+34h] [bp-13Ch]
  int v27; // [sp+38h] [bp-138h]
  int v28; // [sp+3Ch] [bp-134h] BYREF
  _DWORD *v29; // [sp+13Ch] [bp-34h]
  int v30; // [sp+140h] [bp-30h]
  int (**v31)(); // [sp+144h] [bp-2Ch] BYREF
  const char *v32; // [sp+148h] [bp-28h]

  v4 = 0;
  v29 = a1;
  v30 = 0;
  v31 = &sead__SafeStringBase__vtable;
  v32 = " ";
  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v21 = a1;
  v5 = a1[1];
  while ( *(_BYTE *)(v5 + v4) )
  {
    if ( !*(_BYTE *)(v5 + v4 + 1) )
    {
      ++v4;
      break;
    }
    if ( !*(_BYTE *)(v5 + v4 + 2) )
    {
      v4 += 2;
      break;
    }
    v6 = v4 + 2 <= 0x7FFFF;
    v4 += 3;
    if ( !v6 )
    {
      v4 = 0;
      break;
    }
  }
  result = v4 + 1;
  v19 = v4 + 1;
  if ( v4 != -1 )
  {
    v8 = 0;
    while ( 1 )
    {
      v26 = &v28;
      v25 = &BufferedSafeStringBase_char_vtable_probably;
      v27 = 256;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v25);
      *(_BYTE *)v26 = 0;
      v9 = v29;
      v10 = v30;
      v25 = &off_60BD94BC;
      (*(void (__fastcall **)(_DWORD *))(*v29 + 12))(v29);
      v11 = v9[1];
      v12 = 0;
      while ( *(_BYTE *)(v11 + v12) )
      {
        if ( !*(_BYTE *)(v11 + v12 + 1) )
        {
          ++v12;
          if ( v10 < 0 )
            goto LABEL_37;
          goto LABEL_22;
        }
        if ( !*(_BYTE *)(v11 + v12 + 2) )
        {
          v12 += 2;
          break;
        }
        v6 = v12 + 2 <= 0x7FFFF;
        v12 += 3;
        if ( !v6 )
        {
          v12 = 0;
          if ( v10 < 0 )
            goto LABEL_37;
          goto LABEL_22;
        }
      }
      if ( v10 < 0 )
        goto LABEL_37;
LABEL_22:
      if ( v10 <= v12 )
      {
        ((void (__fastcall *)(int (***)()))v25[3])(&v25);
        v13 = v27;
        if ( v27 >= 1 )
        {
          v14 = 0;
          v20 = v26;
          while ( 1 )
          {
            v15 = v29[1];
            if ( !*(_BYTE *)(v15 + v10) )
              break;
            ((void (__fastcall *)(int (***)()))v31[3])(&v31);
            v16 = *(unsigned __int8 *)(v15 + v10);
            for ( i = 1; v32[i - 1]; i += 2 )
            {
              if ( (unsigned __int8)v32[i - 1] == v16 )
                goto LABEL_36;
              if ( i >= 524289 || !v32[i] )
                break;
              if ( (unsigned __int8)v32[i] == v16 )
                goto LABEL_36;
            }
            ++v10;
            *((_BYTE *)v20 + v14++) = v16;
            if ( v13 <= v14 )
              goto LABEL_37;
          }
LABEL_36:
          *((_BYTE *)v20 + v14) = 0;
          v30 = v10 + 1;
        }
      }
LABEL_37:
      if ( sub_60900FB4((float *)&v24, &v25) == 1 )
      {
        v18 = v24;
      }
      else
      {
        v18 = 0;
        v24 = 0;
      }
      *(_DWORD *)(a2 + 4 * v8++) = v18;
      result = a3;
      if ( v8 == a3 )
        break;
      if ( v29 == v21 )
      {
        result = v30;
        if ( v30 == v19 )
          break;
      }
    }
  }
  return result;
}
