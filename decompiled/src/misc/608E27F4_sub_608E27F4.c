/* sub_608E27F4
 * address: 0x608E27F4   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608E27F4(_DWORD *a1, int a2, int a3, unsigned int a4)
{
  int v8; // r9
  int EntryType; // r0
  int v10; // r1
  _DWORD *v11; // r6
  int v12; // r11
  const char *v13; // r1
  int v14; // r5
  int v15; // r0
  int v16; // r7
  int v18; // [sp+4h] [bp-134h] BYREF
  int (**v19)(); // [sp+8h] [bp-130h] BYREF
  nn__fs *v20; // [sp+Ch] [bp-12Ch]
  int v21; // [sp+10h] [bp-128h]
  int v22; // [sp+14h] [bp-124h] BYREF

  LOBYTE(v8) = 1;
  if ( a4 <= 3 )
    v8 = dword_60AF2CC4[a4];
  v20 = (nn__fs *)&v22;
  v19 = &BufferedSafeStringBase_char_vtable_probably;
  v21 = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v19);
  *(_BYTE *)v20 = 0;
  v19 = &off_60BD94BC;
  if ( !(*(int (__fastcall **)(_DWORD *, int (***)(), int))(*a1 + 124))(a1, &v19, a3) )
  {
    EntryType = 2560002;
    goto LABEL_9;
  }
  if ( (a4 | 2) != 3 )
  {
LABEL_17:
    v12 = 1;
    goto LABEL_18;
  }
  ((void (__fastcall *)(int (***)()))v19[3])(&v19);
  EntryType = nn__fs__GetEntryType(&v18, v20);
  if ( EntryType )
  {
    v10 = 0;
    if ( (EntryType & 0x3FFFFF) != 0x202 )
      goto LABEL_9;
  }
  else
  {
    v10 = v18;
    if ( v18 != 1 )
      v10 = 0;
  }
  if ( a4 == 3 )
  {
    EntryType = 1026;
    if ( v10 )
      goto LABEL_9;
    goto LABEL_16;
  }
  v12 = 0;
  if ( !v10 )
  {
LABEL_16:
    ((void (__fastcall *)(int (***)()))v19[3])(&v19);
    EntryType = nn__fs__CreateFile(v20, v13, 0);
    if ( !EntryType )
      goto LABEL_17;
LABEL_9:
    a1[20] = EntryType;
    return 0;
  }
LABEL_18:
  v14 = sub_608E78F8(a1, a2);
  v11 = 0;
  FIELD_U32(v14, 8) = 0;
  FIELD_U32(v14, 12) = 0;
  FIELD_U8(v14, 16) = (v8 & 2) != 0;
  FIELD_U8(v14, 17) = 0;
  ((void (__fastcall *)(int (***)()))v19[3])(&v19);
  v15 = nn__fs__OpenFile();
  a1[20] = v15;
  if ( !v15 )
  {
    v11 = a1;
    if ( !((a4 != 1) | v12) )
    {
      v11 = 0;
      v16 = nn__fs__SetFileSize(*(_DWORD *)v14);
      if ( v16 )
      {
        nn__fs__CloseFile();
        a1[20] = v16;
      }
      else
      {
        return a1;
      }
    }
  }
  return v11;
}
