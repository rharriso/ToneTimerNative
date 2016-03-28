// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ToneTimer.djinni

package rharriso.tonetimer;

import java.util.concurrent.atomic.AtomicBoolean;

/**
 *
 * Timer View 
 *
 */
public abstract class TimerViewModel {
    public abstract void pause();

    public abstract void play();

    public abstract void reset();

    /** respond to clock event from native layer */
    public abstract void onTick();

    public static native TimerViewModel createWithView(TimerView view);

    private static final class CppProxy extends TimerViewModel
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }

        @Override
        public void pause()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_pause(this.nativeRef);
        }
        private native void native_pause(long _nativeRef);

        @Override
        public void play()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_play(this.nativeRef);
        }
        private native void native_play(long _nativeRef);

        @Override
        public void reset()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_reset(this.nativeRef);
        }
        private native void native_reset(long _nativeRef);

        @Override
        public void onTick()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_onTick(this.nativeRef);
        }
        private native void native_onTick(long _nativeRef);
    }
}
