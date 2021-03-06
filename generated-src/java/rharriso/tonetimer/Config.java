// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ToneTimer.djinni

package rharriso.tonetimer;

public final class Config {


    /*package*/ final int mIntervalDuration;

    /*package*/ final int mIntervalBreak;

    /*package*/ final int mSetSize;

    /*package*/ final int mSetBreak;

    /*package*/ final int mSetCount;

    public Config(
            int intervalDuration,
            int intervalBreak,
            int setSize,
            int setBreak,
            int setCount) {
        this.mIntervalDuration = intervalDuration;
        this.mIntervalBreak = intervalBreak;
        this.mSetSize = setSize;
        this.mSetBreak = setBreak;
        this.mSetCount = setCount;
    }

    public int getIntervalDuration() {
        return mIntervalDuration;
    }

    public int getIntervalBreak() {
        return mIntervalBreak;
    }

    public int getSetSize() {
        return mSetSize;
    }

    public int getSetBreak() {
        return mSetBreak;
    }

    public int getSetCount() {
        return mSetCount;
    }

    @Override
    public String toString() {
        return "Config{" +
                "mIntervalDuration=" + mIntervalDuration +
                "," + "mIntervalBreak=" + mIntervalBreak +
                "," + "mSetSize=" + mSetSize +
                "," + "mSetBreak=" + mSetBreak +
                "," + "mSetCount=" + mSetCount +
        "}";
    }

}
